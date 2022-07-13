/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:22:58 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/13 03:25:44 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_memcpy.c
* @brief ft_memcpy - copy memory area
* 
* @see man 3 memcpy
*
* @param const void *s1, const void *s2, size_t n
*
* @return 
* 	The memcpy() function returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	byte_t	*mem_src;
	byte_t	*mem_dst;

	mem_src = (byte_t *)src;
	mem_dst = (byte_t *)dest;
	while (n)
	{
		*(mem_dst) = *(mem_src);
		--n;
		++mem_src;
		++mem_dst;
	}
	return (dest);
}