/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:44:16 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 02:32:12 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> /* printf, spprintf */
#include <stdlib.h> /* EXIT_SUCCESS, atoi */
#include <limits.h> /* INT_MIN INT_MAX */
#include "libft.h"
#include <math.h> /* ceil, log10 */
#include <string.h> /* strcmp, strncmp */
#include <stdint.h> /* strcmp, strncmp */

typedef  int32_t counter32_t; 
typedef  int64_t counter64_t; 

int     main(void)
{
    register counter32_t i32 = INT_MIN;
    char *str;
    
    str = calloc((unsigned long)((ceil(log10(INT_MAX))+1)*sizeof(char)), (unsigned long)((ceil(log10(INT_MAX))+1)*sizeof(char)));

    if (ft_atoi(str) != atoi(str))
    {
        printf("KO!!!!");
        return (EXIT_FAILURE);
    }
    while (i32 < INT_MAX)
    {
        if (ft_atoi(str) != atoi(str))
        {
            printf("KO!!!!");
            return (EXIT_FAILURE);
        }
        ++i32;
    }
    if (ft_atoi(str) != atoi(str))
    {
        printf("KO!!!!");
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
