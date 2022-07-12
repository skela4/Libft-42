/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 01:18:18 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/13 01:53:37 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_memchr.c
* @brief ft_memchr - scan memory for a character
* 
* @see man 3 memchr
*
* @param const void *s, int c, size_t n
*
* @return 
* 	The  memchr()  and memrchr() functions return a pointer to the matching
*   byte or NULL if the character does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	byte_t	bit;
	byte_t	*memory;

	bit = (byte_t)c;
	memory = (byte_t *)s;
	while (n)
	{
		if (*memory == bit)
			return (memory);
		--n;
		++memory;
	}
	return (NULL);
}
