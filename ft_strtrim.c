/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:21:34 by danielro          #+#    #+#             */
/*   Updated: 2022/04/29 14:26:44 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		a;
	int		b;
	char	*c;

	//if (*s1 == 0 || *set == 0)
	//	return ((char *)s1);
	b = 0;
	while (ft_strchr(set, s1[b]) && s1[b])
		b++;
	a = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[a]) && a)
		a--;
	c = ft_substr(s1, b, a - b + 1);
	return (c);
}
/*
int main(void)
{
	char *a = "zthola keidk holazt";
	char *b = "zt";

	printf("%s\n%s", a, b);
	printf("\nResultado: %s", ft_strtrim(a, b));
	return (0);
}*/
