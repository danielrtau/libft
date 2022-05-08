/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:39:21 by danielro          #+#    #+#             */
/*   Updated: 2022/04/26 19:44:30 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *s);
void	*ft_memmove(void *dst, const void *src, size_t len);

char	*ft_strdup(const char *s1)
{
	unsigned int	a;
	char			*b;

	a = ft_strlen(s1);
	b = malloc((a + 1) * sizeof(char));
	if (b == NULL)
		return (NULL);
	ft_memmove(b, s1, a + 1);
	return (b);
}
