/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:44:16 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/12 04:17:54 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> /* printf, spprintf */
#include <stdlib.h> /* EXIT_SUCCESS, atoi */
#include <limits.h> /* INT_MIN INT_MAX */
#include "libft.h"
#include <math.h> /* ceil, log10 */
#include <string.h> /* strcmp, strncmp */
#include <stdint.h> /* strcmp, strncmp */
#include <stddef.h> /* strcmp, strncmp */


__attribute__((unused)) static int _calloc(char const *progname)
{
	int				*p;
	size_t			i;
	const size_t	cnt = 16;

	printf("%s: Testing ft_calloc()\n", progname);
	if(ft_calloc(SIZE_MAX, 2) != NULL || ft_calloc(2, SIZE_MAX) != NULL)
	{
		printf("ft_calloc() failed to detect overflow\n");
		return 0;
	}
	if((p = ft_calloc(sizeof(int), cnt)) == NULL)
	{
		printf("ft_calloc() failed to allocate memory\n");
		return 0;
	}
	for(i = 0; i < cnt; i++)
    {
		if(p[i] != 0)
		{
			printf("ft_calloc() failed to clear memory\n");
			return 0;
		}
    }
	free(p);
    p = NULL;
	return 1;
}

__attribute__((unused)) static int ft_atoi_test(void)
{
    register int i = INT_MIN;
    char *str;
    
    str = calloc((unsigned long)((ceil(log10(INT_MAX))+1)*sizeof(char)), (unsigned long)((ceil(log10(INT_MAX))+1)*sizeof(char)));

    if (ft_atoi(str) != atoi(str))
    {
        printf("KO!!!!");
        return (0);
    }
    while (i < INT_MAX)
    {
        if (ft_atoi(str) != atoi(str))
        {
            printf("KO!!!!");
            return (0);
        }
        ++i;
    }
    if (ft_atoi(str) != atoi(str))
    {
        printf("KO!!!!");
        return (0);
    }
    return (1);
}


__attribute__((unused)) static void ft_calloc_test(void)
{
    int  i;
    char *s1;
    char *s2;
    size_t u;

    i = 0;
    u = 0;
    --u;
    u /= 2;
    s1 = NULL;
    s2 = NULL;

    printf("%lu", u);
    s1 = ft_calloc(u, u);
    s2 = calloc(u, u);

    printf("%s\n%s\n", s1, s2);
    return (0);

    while (i < 10 * 10)
    {
        printf("%c", s1[i]);
        ++i;
    }
    i = 0;
    printf("\n");
    while (i < 10 * 10)
    {
        printf("%c", s2[i]);
        ++i;
    }
}

int     main(void)
{
    return (EXIT_SUCCESS);
}
