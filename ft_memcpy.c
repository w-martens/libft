/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 20:25:01 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/21 18:24:10 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char*)dst;
	c2 = (unsigned char*)src;
	if (!dst && !src)
		return (0);
	while (len > i)
	{
		c1[i] = c2[i];
		i++;
	}
	return (dst);
}
