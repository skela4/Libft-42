/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 03:13:33 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/13 02:10:03 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef	enum
{
		false,
		true
}		bool_t;


typedef	unsigned char	byte_t;

size_t  ft_strlen(const char *s);

int     ft_tolower(int c);

int     ft_toupper(int c);

int     ft_atoi(const char *nptr);

void    ft_bzero(void *s, size_t n);

void	*ft_memset(void *b, int c, size_t len);

void    *ft_calloc(size_t nmemb, size_t size);

int     ft_isalnum(int c);

int     ft_isalpha(int c);

int     ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

#endif
