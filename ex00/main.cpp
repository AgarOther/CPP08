/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:13:50 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/14 14:21:14 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main()
{
	try
	{
		std::vector<int> array;
		for (int i = 0; i < 10; i++)
			array.push_back(i);
		std::cout << easyfind(array, 2) << std::endl;
		std::cout << easyfind(array, -1) << std::endl;
		std::cout << easyfind(array, 11) << std::endl;
	} catch (const char *err)
	{
		std::cerr << err << std::endl;
	}
}
