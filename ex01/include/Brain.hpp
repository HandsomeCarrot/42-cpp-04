/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:24:06 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/04 20:53:37 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(const Brain &other);
	~Brain(void);

	Brain	&operator=(const Brain &other);

	std::string	ideas[100];
};

//std::ostream	&operator<<(std::ostream &os, const Brain &c);

#endif /* BRAIN_HPP */
