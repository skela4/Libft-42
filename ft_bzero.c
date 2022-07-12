/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 02:35:07 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 04:23:16 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_bzero.c
* @brief ft_bzero -- zero a byte string.
* 
* @see man 3 bzero
*
* @param void *s, size_t n
*
* @return 
* 	void
*/
void ft_bzero(void *s, size_t n)
{
    register size_t  i;
    unsigned char   *byte_string;

    i = 0;
    byte_string = (unsigned char *)s;
    while (i < n)
    {
        *(byte_string + i) = '\0';
        ++i;
    }
}
