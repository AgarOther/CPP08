/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:35:47 by scraeyme          #+#    #+#             */
/*   Updated: 2025/05/14 17:00:12 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T>
class MutantStack
{
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack &operator=(const MutantStack &obj);
		~MutantStack();
};
