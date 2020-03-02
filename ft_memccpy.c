/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 20:51:52 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/21 17:14:40 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;
	unsigned char	ch;

	i = 0;
	c1 = (unsigned char*)dest;
	c2 = (unsigned char*)src;
	ch = (unsigned char)c;
	while (n > i)
	{
		c1[i] = c2[i];
		if (c2[i] == ch)
			return (&c1[i + 1]);
		i++;
	}
	return (0);
}
