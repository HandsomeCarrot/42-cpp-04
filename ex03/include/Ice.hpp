/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:44 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:45 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

class Ice
{
private:
protected:
public:
	Ice(void);
	//Ice(<all parameters of class>);
	Ice(const Ice &other);
	~Ice(void);

	Ice	&operator=(const Ice &other);
};

//std::ostream	&operator<<(std::ostream &os, const Ice &c);

#endif /* ICE_HPP */
