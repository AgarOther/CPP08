/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:07:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/15 16:02:58 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	// Subject
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const char *err)
	{
		std::cerr << err << std::endl;
	}
	
	// Working Span
	try
	{
		Span span(5);

		for (int i = 0; i < 5; i++)
			span.addNumber(i);
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	} catch (const char *err)
	{
		std::cerr << err << std::endl;
	}

	// Error Span
	try
	{
		std::vector<int> numbers;
		
		for (int i = 0; i < 15; i++)
			numbers.push_back(i);
		Span span(numbers.size());
		span.addRange(numbers.begin(), numbers.end());
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;

		Span spanError(numbers.size() - 1);
		spanError.addRange(numbers.begin(), numbers.end());
		std::cout << "Longest span: " << spanError.longestSpan() << std::endl;
		std::cout << "Shortest span: " << spanError.shortestSpan() << std::endl;
	} catch (const char *err)
	{
		std::cerr << err << std::endl;
	}
}
