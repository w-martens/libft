/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 15:52:56 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/21 21:29:07 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1val;
	unsigned char	*s2val;

	i = 0;
	s1val = (unsigned char *)s1;
	s2val = (unsigned char *)s2;
	while (i < n)
	{
		if (s1val[i] != s2val[i])
			return ((s1val[i] - s2val[i]));
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
