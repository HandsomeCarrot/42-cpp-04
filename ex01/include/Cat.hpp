/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:48 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 14:51:35 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*brain_;
public:
	Cat(void);
	Cat(const Cat &other);
	~Cat(void);

	Cat	&operator=(const Cat &other);

	void	makeSound(void) const;
};

#endif /* CAT_HPP */
