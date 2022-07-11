/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 03:09:20 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 01:44:19 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_strlen.c
* @brief ft_strlen -- calculate the length of a string.
* 
* @see man 3 strlen
*
* @param const char *s
*
* @return 
* 	The ft_strlen() function calculates the length of the string pointed to by
*	s, excluding the terminating null byte ('\0')
*/
size_t	ft_strlen(const char *s)
{
	const char	*end_ptr;

	end_ptr = s;
	while (*end_ptr)
		++end_ptr;
	return ((size_t)(end_ptr - s));
}
