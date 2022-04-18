/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:39:45 by danielro          #+#    #+#             */
/*   Updated: 2022/04/14 17:16:14 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*i;
	const char	*j;

	i = dst;
	j = src;
	while (n-- && (dst || src))
		*i++ = *j++;
	return (dst);
}
