/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 01:21:41 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/14 22:03:26 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *str;

	if (count == 0 || size == 0)
		return (ft_strdup(""));
	str = (void *)malloc(size * count);
	if (str == 0)
		return (0);
	ft_bzero(str, size * count);
	return (str);
}
