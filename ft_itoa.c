/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 22:31:19 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/14 03:04:40 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse(char *res, int len, int n)
{
	int		i;
	char	*tmp;

	tmp = ft_strdup(res);
	i = 0;
	if (n < 0)
		i++;
	len--;
	while (len >= 0 && res[i] != '\0')
	{
		res[i] = tmp[len];
		i++;
		len--;
	}
}

static int	lencnt(int n)
{
	int				res;
	unsigned int	nb;

	res = 0;
	if (n >= 0)
		nb = n;
	if (n < 0)
	{
		nb = n * -1;
		res++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		res++;
	}
	return (res + 1);
}

static char	*make_res(int n, char *res, int i, int len)
{
	unsigned int	nb;

	nb = 0;
	while (i < len)
	{
		if (n >= 0)
			nb = n;
		if (n < 0)
		{
			nb = n * -1;
			res[i] = '-';
			i++;
		}
		if (nb > 9)
			make_res((nb / 10), res, i + 1, len);
		res[i] = '0' + (nb % 10);
		i++;
		return (0);
	}
	return (res);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = lencnt(n);
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	make_res(n, res, 0, len);
	reverse(res, len, n);
	return (res);
}
