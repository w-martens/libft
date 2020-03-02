/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 18:30:55 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/28 21:16:02 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (s == 0)
		return (NULL);
	res = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == 0)
		return (NULL);
	res[ft_strlen(s)] = '\0';
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
