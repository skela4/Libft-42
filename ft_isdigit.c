/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:54:23 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/13 01:52:46 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @file ft_isdigit.c
* @brief ft_isdigit - checks if is a digit (0 through 9)
* 
* @see man 3 isdigit
*
* @param int c
*
* @return 
* 	The values returned are nonzero if the character c falls into the
*   tested class, and zero if not.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
