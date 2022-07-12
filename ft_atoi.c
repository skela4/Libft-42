/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 01:36:58 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 02:07:47 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @file ft_atoi.c
* @brief ft_atoi -- convert a nptring to an integer.
* 
* @see man 3 strlen
*
* @param const char *s
*
* DESCRIPTION
* 	The atoi() function converts the initial portion of the string pointed
*   to by nptr to int.  The behavior is the same as
* 
*          strtol(nptr, NULL, 10);
* 
*   except that atoi() does not detect errors.
*
* @return The converted value. 
* 	
*/
int		ft_atoi(const char *nptr)
{
	long int	sign;
	long int	nb;

	sign = 1;
	nb = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = (*(nptr++) == '-') ? -1 : 1;
	while (*nptr >= '0' && *nptr <= '9')
		nb = nb * 10 + *(nptr++) - '0';
	return ((int)(nb * sign));
}
