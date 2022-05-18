/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:41:51 by danielro          #+#    #+#             */
/*   Updated: 2022/05/18 15:08:29 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	int		a;
	//int		f;
	char	*d;
	char	**b;
	//char	*e;

	a = 0;
	d = (char *)s;
	while (*d++)
	{
		if (*d == c && s[1] !=c)
			a++;
	}
	printf("\n%d", a);
	b = malloc(a * sizeof(char *));
	/*
	while (a-- > 0)
	{
		printf("\n%d", a);
		while (*s == c)
			s++;
		f = 0;
		while (s[f] != c)
			f++;
		e = malloc((f + 1) * sizeof(char));
		if (e == NULL)
			return (NULL);
		e = ft_substr(s, 0, f);
		printf("\n%s", e);
		b[6 - a] = e;
		s = s + f;
	}
	printf("%d", a);
	*/
	return (0);
}

int	main(void)
{
	//int i = 0;
	char **tab;
		
	tab = ft_split("jjbonjour jjjje m'appel jjArthur jououj ", 'j');
/*	
	while (i < 5)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}*/
	return (0);
}
