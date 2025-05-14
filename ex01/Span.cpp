/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:23:35 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/14 15:29:04 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() : _size(0)
{
	std::cout << "A Span (default) of size 0 spawned!" << std::endl;
}

Span::Span(unsigned int N) : _size(N)
{
	std::cout << "A Span (default) of size " << N << " spawned!" << std::endl;
}

Span::Span(const Span &copy)
{
	_values.resize(copy._size);
	for (unsigned int i = 0; i < copy.size(); i++)
		_values[i] = copy._values[i];
}

Span &Span::operator=(const Span &obj)
{
	if (&obj == this)
		return (*this);
	_values.resize(obj._size);
	for (unsigned int i = 0; i < obj._size; i++)
		_values[i] = obj._values[i];
	return (*this);
}

unsigned int Span::size() const
{
	return (_size);
}

void Span::addNumber(int n)
{
	if (static_cast<unsigned int>(_values.size()) + 1 > _size)
		throw ("Max elements of span reached.");
	_values.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		if (_values.size() == _size)
			throw ("Max elements of span reached.");
		addNumber(*begin);
		++begin;
	}
}

int Span::shortestSpan() const
{
	if (_size <= 1)
		throw ("Not enough elements to find shortest span.");
	return (std::distance(_values.end(), _values.begin()));
}

int Span::longestSpan() const
{
	if (_size <= 1)
		throw ("Not enough elements to find longest span.");
	return (std::distance(_values.begin(), _values.end()));
}

Span::~Span()
{
	std::cout << "A Span despawned!" << std::endl;
}
