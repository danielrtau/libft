/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:15:45 by danielro          #+#    #+#             */
/*   Updated: 2022/05/21 17:56:31 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			a;
	const char	*b;

	a = ft_strlen(s);
	b = s;
	s = s + a;
	while (*s != *b && (char)c != *s)
		s--;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
