/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:06:03 by danielro          #+#    #+#             */
/*   Updated: 2022/05/08 18:46:19 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	a[11];
	int		b;
	char	*c;
	long	d;

	b = 10;
	d = n;
	ft_memset(a, 45, 11); 
	if (n < 0)
		d *= -1;
	while (d / 10)
	{
		a[b--] = (d % 10) + '0';
		d /= 10;
	}
	a[b] = (d % 10) + '0';
	if (n < 0)
		b--;
	c = malloc((12 - b) * sizeof(char));
	if (c == NULL)
		return (NULL);
	c = ft_substr(a, b, 11 - b);
	return (c);
}

int	main(void)
{
	int	len;
    printf("Ingrese un numero: ");
    scanf("%d", &len);
	printf("\nstring: %s", ft_itoa(len));
	return(0);
}
