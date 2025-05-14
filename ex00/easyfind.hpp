/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:14:22 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/14 14:20:24 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <vector>
# include <algorithm>

template<typename T>
int easyfind(T array, int n)
{
	std::vector<int>::iterator it = std::find(array.begin(), array.end(), n);
	if (it != array.end())
		return (*it);
	throw ("Occurence not found.");
}

#endif