/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 03:18:18 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 04:22:05 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
* @file ft_calloc.c
* @brief ft_calloc -- zero a byte string.
* 
* @see man 3 calloc
*
* @param void *s, size_t n
*
* @return 
* 	NULL on failed or an allocated pointer.
*/

void *ft_calloc(size_t nmemb, size_t size)
{
    register size_t i;
    register size_t nbytes;
    char            *memory;

    i = 0; 
    nbytes = 0;
    nbytes -= 1;
    memory = (void *)0;
    if (nmemb == 0 || size == 0)
        return (malloc(0));
    if (nbytes / size < nmemb)
        return (memory);
    nbytes = size * nmemb; 
    memory = malloc(nbytes);
    if (memory == (void *)0)
        return (memory);
    while (i < nbytes)
    {
        *(memory + i) = '\0';
        ++i;
    }
    return (memory);
}
