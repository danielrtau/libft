/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:05:45 by danielro          #+#    #+#             */
/*   Updated: 2022/05/08 18:40:06 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	const char		*b;
	unsigned int	c;

	if (s)
	{
		c = ft_strlen(s);
		if (start >= ft_strlen(s) || len <= 0)
	{
		a = (char *)malloc(1);
		a[0] = '\0';
		return (a);
	}
		if (len > ft_strlen(s) && start < ft_strlen(s))
			len = ft_strlen(s) - start;
		a = malloc((len + 1) * sizeof(char));
		if (a == NULL)
			return (NULL);
		if (start > c)
			start = c;
		b = s + start;
		ft_strlcpy(a, b, len + 1);
		return (a);
	}
	return ((char *)s);
}
