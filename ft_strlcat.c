/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 19:20:50 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/26 19:16:17 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0' && x < n)
		x++;
	return (x);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	srclen = ft_strlen(src);
	if (dst == 0 && dstsize == 0)
		return (srclen);
	dstlen = ft_strnlen(dst, dstsize);
	ft_strlcpy(dst + dstlen, src, dstsize - dstlen);
	return (srclen + dstlen);
}
