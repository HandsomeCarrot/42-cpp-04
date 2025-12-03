/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:50 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/03 21:33:50 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
private:
protected:
public:
	Dog(void);
	//Dog(<all parameters of class>);
	Dog(const Dog &other);
	~Dog(void);

	Dog	&operator=(const Dog &other);
};

#endif /* DOG_HPP */
