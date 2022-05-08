/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:57:00 by danielro          #+#    #+#             */
/*   Updated: 2022/04/21 20:53:54 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlen(const char *s);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				a;
	unsigned int	b;
	const char		*c;
//	const char		*d;

	a = ft_strlen(needle);
	if (a < 1)
		return ((char *)haystack);
	c = haystack;
	if (len < 0)
		return ("a");
	while (len--)
	{
		b = ft_strncmp(c, needle, a);
		if (b == 0 )
			return ((char *)c);
		c++;
	}
	return (0);
}
