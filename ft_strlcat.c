/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:49:08 by danielro          #+#    #+#             */
/*   Updated: 2022/04/07 14:51:01 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = ft_strlen(src);
	b = ft_strlen(dst);
	c = 0;
	if (dstsize > b)
	{
		while (src[c] && c < (dstsize - b - 1))
		{
			dst[b + c] = src[c];
			c++;
		}
		dst[b + c] = '\0';
		return (a + b);
	}
	return (a + dstsize);
}
