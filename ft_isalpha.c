/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 01:06:25 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 05:26:19 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* @file ft_isalpha.c
* @brief ft_isalpha - checks for an alphabetic character;
                    in the standard "C" locale,
                    it is equivalent to (isupper(c) || islower(c)).
* 
* @see man 3 isalpha
*
* @param int c
*
* @return 
* 	The values returned are nonzero if the character c falls into the
*   tested class, and zero if not.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}
