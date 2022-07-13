/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:23:17 by aleks             #+#    #+#             */
/*   Updated: 2022/07/13 03:31:59 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_toupper.c
* @brief toupper -- lower case to upper case letter conversion.
* 
* @see man 3 toupper
*
* @param c 
* 	Must be representable as an unsigned char or the value of EOF.
*
* @return 
* 	If the argument is a lowercase character, returns the uppercase version;
*   otherwise, just returns the original argument.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
