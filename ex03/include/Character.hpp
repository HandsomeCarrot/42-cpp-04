/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:41 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

class Character
{
private:
protected:
public:
	Character(void);
	//Character(<all parameters of class>);
	Character(const Character &other);
	~Character(void);

	Character	&operator=(const Character &other);
};

//std::ostream	&operator<<(std::ostream &os, const Character &c);

#endif /* CHARACTER_HPP */
