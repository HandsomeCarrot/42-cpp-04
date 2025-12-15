/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:42 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:43 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

class Cure
{
private:
protected:
public:
	Cure(void);
	//Cure(<all parameters of class>);
	Cure(const Cure &other);
	~Cure(void);

	Cure	&operator=(const Cure &other);
};

//std::ostream	&operator<<(std::ostream &os, const Cure &c);

#endif /* CURE_HPP */
