/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 01:55:14 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/13 02:14:57 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_memcmp.c
* @brief ft_memcmp - compare memory areas
* 
* @see man 3 memcmp
*
* @param const void *s1, const void *s2, size_t n
*
* @return 
* 	The memcmp() return  an integer less than, e 
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	byte_t	*mem1;
	byte_t	*mem2;

	mem1 = (byte_t *)s1;
	mem2 = (byte_t *)s2;
	while (n)
	{
		if (*mem1 != *mem2)
			return (*mem1 - *mem2);
		--n;
		++mem1;
		++mem2;
	}
	return (0);
}
