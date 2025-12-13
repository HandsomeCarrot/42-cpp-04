/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:24:06 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 19:27:17 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
	std::string	ideas_[100];
public:
	Brain(void);
	Brain(const Brain &other);
	~Brain(void);

	Brain	&operator=(const Brain &other);
};

#endif /* BRAIN_HPP */
