/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 21:33:20 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/30 18:33:16 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fwd(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0')
				break ;
		}
		if (set[j] == '\0')
			break ;
		i++;
		j = 0;
	}
	if (s1[i] == '\0')
		return (-1);
	return (i);
}

static int	bwd(char const *s1, char const *set)
{
	int j;
	int i;
	int ret;

	i = (ft_strlen(s1) - 1);
	j = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0')
				break ;
		}
		i--;
		if (set[j] == '\0')
			break ;
		j = 0;
	}
	ret = ft_strlen(s1) - (i + 2);
	return (ret);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		tail;
	int		sublen;
	char	*ret;

	if (s1 == 0)
		return (0);
	if (set == 0 || set[0] == '\0')
		return (ft_strdup(s1));
	start = fwd(s1, set);
	if (start == -1)
	{
		return (ft_strdup(""));
	}
	tail = bwd(s1, set);
	sublen = ft_strlen(s1) - start - tail;
	ret = ft_substr(s1, start, sublen);
	return (ret);
}
