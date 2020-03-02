/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 20:16:07 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/26 19:19:29 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t srclen;
	size_t dstlen;

	i = 0;
	dstlen = dstsize - 1;
	if (src == 0)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (srclen < dstsize)
		dstlen = srclen;
	ft_memcpy(dst, src, dstlen);
	dst[dstlen] = '\0';
	return (srclen);
}
