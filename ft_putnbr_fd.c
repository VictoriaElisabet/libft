/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrankul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 09:57:02 by vgrankul          #+#    #+#             */
/*   Updated: 2019/10/29 10:01:22 by vgrankul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		n = n / 10;
		ft_putnbr_fd(n, fd);
		ft_putchar_fd('8', fd);
	}
	else
	{
		if (n < -2147483648 || n > 2147483647)
			return ;
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n < 10)
		{
			ft_putchar_fd(n + '0', fd);
			return ;
		}
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
		return ;
	}
}
