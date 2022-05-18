/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:37:58 by danielro          #+#    #+#             */
/*   Updated: 2022/05/10 13:32:45 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	a[10];
	int		b;

	b = -1;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		while (n / 10)
		{
			a[++b] = n % 10;
			n /= 10;
		}
		a[++b] = n;
		while (b >= 0)
		{
			ft_putchar_fd(a[b] + '0', fd);
			b--;
		}
	}
}
