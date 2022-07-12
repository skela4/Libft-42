/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 05:20:54 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 05:25:58 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @file ft_isascii.c
* @brief ft_isascii - checks whether c is a 7-bit unsigned char value
*                   that fits into the ASCII character set.
* 
* @see man 3 isascii
*
* @param int c
*
* @return 
* 	The values returned are nonzero if the character c falls into the
*   tested class, and zero if not.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
