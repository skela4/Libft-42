/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 03:09:20 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/10 05:34:59 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "./header_c_documentation.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


int variable_shadow_error_example2(void) {
	int	result = 4;

	int	i = 0;
	while (i < 10)
	{
		++result;
		i++;
	}

  return result;
}

int	float_promotion_example(float val) {
	return val > 2.6f;
}

/**
* A brief history of JavaDoc-style (C-style) comments.
*
* @see Test()
*
* This is the typical JavaDoc-style C-style comment. It starts with two
* asterisks.
* @param s The first value of the summation
*
* @return the sum of a & b
*/
size_t	ft_strlen(const char *s)
{
	const char	*t;

	t = s;
	while (*t)
		++t;
	return ((size_t)(t - s));
}

/*
* 175649
* uint8_t simple_for_loop_with_byte(uint8_t max_value) {
*   int sum = 0;
*   uint8_t i = 0;

* 	while (i < max_value)
* 	{
* 		sum += i;
* 		i++;
* 	}
* 	return (uint8_t)sum;
* }
*/

// 175648
int simple_for_loop_with_word(uint8_t max_value) {
	int sum = 0;
   	int i = 0;

	while (i < max_value)
	{
		sum += i;
		i++;
	}
	return sum;
}

int	main(void)
{
	printf("%zu\n", ft_strlen("aleks"));
	return (0);
}

/**
 * count number of instructions
* objdump -dw fortify_example | wc -l  
* 
* -Wshadow -Wdouble-promotion
* COMPILE:
* clang -std=c89 -Wall -Wextra -Wvla -Wconversion -pedantic -pipe
*	-Werror -Werror=format-security -Werror=implicit-function-declaration
*		ft_strlen.c -o program
*
* DEBUG:
* clang -g3 -fsanitize=address -std=c89 -Wall -Wextra -Wvla -Wconversion
*	-pedantic
*	-Werror -Werror=format-security -Werror=implicit-function-declaration 
*		ft_strlen.c -o program
*
*/
