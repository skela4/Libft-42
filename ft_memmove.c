/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:26:07 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/13 03:25:15 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_memmove.c
* @brief ft_memmove - copy memory area and take care of overlapping
* 
* @see man 3 memmove
*
* @param const void *s1, const void *s2, size_t n
*
* @return 
* 	The memmove() function returns a pointer to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	byte_t	*mem_src;
	byte_t	*mem_dst;

	mem_src = (byte_t *)src;
	mem_dst = (byte_t *)dest;
	if (mem_dst > mem_src && mem_dst < mem_src + n)
	{
		while (n)
		{
			--n;
			*(mem_dst + n) = *(mem_src + n);
		}
	}
	else
	{
		while (n)
		{
			*(mem_dst) = *(mem_src);
			--n;
			++mem_src;
			++mem_dst;
		}
	}
	return (dest);
}
