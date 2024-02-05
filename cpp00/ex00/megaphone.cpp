/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:18:23 by bortakuz          #+#    #+#             */
/*   Updated: 2024/01/22 11:19:00 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if(ac >1)
	{
		for(int i = 1; i < ac; i++)
		{
			for(int j = 0; av[i][j];j++)
			{
				std::cout<<(char)toupper(av[i][j]);
			}
		}
	}else 
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout<<std::endl;
}