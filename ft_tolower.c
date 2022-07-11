/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 04:24:39 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 00:58:34 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_tolower.c
* @brief tolower -- upper case to lower case letter conversion.
* 
* normal way : (c >= 'A' && c <= 'Z') ? c += 32 : c;
* Bitwise way : c | 0x20;
* @see man 3 tolower
*
* @param c 
* 	Must be representable as an unsigned char or the value of EOF.
*
* @return 
* 	If the argument is an uppercase character, returns the lowercase version;
*   otherwise, just returns the original argument.
*/

int	ft_tolower(int c)
{
	return (c | 0x20);
}
