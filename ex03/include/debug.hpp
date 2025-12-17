/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:00:00 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 16:59:58 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_HPP
# define DEBUG_HPP

# include <iostream>

# ifdef DEBUG
#  define DEBUG_MSG(x) std::cout << x << std::endl
# else
#  define DEBUG_MSG(x)
# endif

#endif /* DEBUG_HPP */
