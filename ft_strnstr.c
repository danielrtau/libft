/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:57:00 by danielro          #+#    #+#             */
/*   Updated: 2022/04/15 15:39:27 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strlen(const char *s);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			a;
	int			b;
	const char	*c;

	a = ft_strlen(needle);
	c = haystack;
	while (len--)
	{
		b = ft_strncmp(c, needle, a);
		if (b == 0)
			return ((char *)c);
		c++;
	}
	return (0);
}
