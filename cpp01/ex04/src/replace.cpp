#include "../include/replace.hpp"
#include <iostream>
#include <fstream>

void Replace::replace(std::string fileName, std::string s1, std::string s2)
{
	std::ifstream file(fileName);
	if (!file.is_open())
	{
		std::cerr << "Error: file not found" << std::endl;
		return;
	}
	std::ofstream fileOut(fileName + ".replace");
	std::string line;
	while(std::getline(file, line))
	{
		std::size_t pos = 0;
		pos =  line.find(s1, pos);
		while (pos != std::string::npos )
		{
			fileOut << line.substr(0, pos) << s2;
			line = line.substr(pos + s1.length(), line.length()-pos);
			pos += s1.length();
			pos = line.find(s1, 0);			
		}
		fileOut << line;
		if(!file.eof())
			fileOut << std::endl;
	}
}