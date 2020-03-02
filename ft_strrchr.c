/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 21:05:45 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/21 20:48:15 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		n;

	n = ft_strlen(s);
	ch = (char)c;
	while (n >= 0)
	{
		if (s[n] == ch)
			return ((char*)&s[n]);
		n--;
	}
	if (ch == '\0')
		return ((char*)&s[n]);
	return (0);
}
