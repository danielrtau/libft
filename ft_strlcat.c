/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:49:08 by danielro          #+#    #+#             */
/*   Updated: 2022/04/04 12:53:33 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	a;
	int				j;

	a = 0;
	while (dst[a])
		a++;
	if (dstsize >= a + 1)
	{
		j = 0;
		while (++a < dstsize && src[j])
		{
			dst[a] = src[j];
			j++;
		}
		dst[a] = '\0';
		while (src[j])
			j++;
		return (a + dstsize);
	}
	a = 0;
	while (src[a])
		a++;
	return (a + dstsize);
}
