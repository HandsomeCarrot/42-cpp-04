/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:48 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/03 21:33:48 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat: public Animal
{
private:
protected:
public:
	Cat(void);
	//Cat(<all parameters of class>);
	Cat(const Cat &other);
	~Cat(void);

	Cat	&operator=(const Cat &other);
};

#endif /* CAT_HPP */
