/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:57:29 by danielro          #+#    #+#             */
/*   Updated: 2022/04/04 12:51:05 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*i;
	int		a;

	i = (char *)src;
	a = 0;
	while (src[a])
		a++;
	if (dstsize-- > 0)
	{
		while (dstsize-- && *dst)
			*dst++ = *i++;
		*dst++ = '\0';
	}
	return (a);
}
