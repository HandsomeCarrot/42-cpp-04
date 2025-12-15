/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:46 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:46 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class ICharacter
{
private:
protected:
public:
	ICharacter(void);
	//ICharacter(<all parameters of class>);
	ICharacter(const ICharacter &other);
	~ICharacter(void);

	ICharacter	&operator=(const ICharacter &other);
};

//std::ostream	&operator<<(std::ostream &os, const ICharacter &c);

#endif /* ICHARACTER_HPP */
