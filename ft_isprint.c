/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 01:10:38 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/13 01:16:20 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_isprint.c
* @brief ft_isprint - checks for any printable character including space.
* 
* @see man 3 isprint
*
* @param int c
*
* @return 
* 	The values returned are nonzero if the character c falls into the
*   tested class, and zero if not.
*/

int	ft_isprint(int c)
{
	return (c >= 0x20 && c <= 0x7E);
}
