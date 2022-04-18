/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:47:52 by danielro          #+#    #+#             */
/*   Updated: 2022/04/18 13:58:56 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(char *b, int c, int len);

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	a;
	void			*b;

	a = count * size;
	b = malloc(a);
	if (b == NULL)
		return (NULL);
	ft_memset(b, 0, a);
	return (b);
}
