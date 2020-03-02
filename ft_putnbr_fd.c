/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmartens <wmartens@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 20:27:27 by wmartens       #+#    #+#                */
/*   Updated: 2019/11/12 01:07:33 by wmartens      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	nb = 0;
	if (n >= 0)
		nb = n;
	if (n < 0)
	{
		nb = n * -1;
		write(fd, "-", 1);
	}
	if (nb > 9)
		ft_putnbr_fd((nb / 10), fd);
	ft_putchar_fd('0' + (nb % 10), fd);
}
