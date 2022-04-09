/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielro <danielro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:15:45 by danielro          #+#    #+#             */
/*   Updated: 2022/04/09 20:21:11 by danielro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	if (*s == (char)c)
		return (0);
	while (*(s + a) && (char)c != *s)
		s--;
	if (*s == (char)c)
		return ((char *)s);
}
