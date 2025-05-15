/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:23:38 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/15 16:04:46 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iterator>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &obj);
		~Span();

		unsigned int size() const;
		int shortestSpan() const;
		int longestSpan() const;
		void addNumber(int n);

		template <typename T>
		void addRange(T begin, T end)
		{
			while (begin != end)
			{
				if (_values.size() == _size)
					throw ("Max elements of span reached.");
				addNumber(*begin);
				++begin;
			}
		}
	private:
		std::vector<int> _values;
		unsigned int _size;
};

#endif
