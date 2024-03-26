/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:54:28 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:22:23 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_ze(unsigned int a, char b)
{
	(void) a;
	return (b - 32);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*source;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	source = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!source)
		return (NULL);
	while (s[i])
	{
		source[i] = f(i, s[i]);
		i++;
	}
	source[i] = '\0';
	return (source);
}
/*
int	main(void)
{
	char	*a = ft_strmapi("bonjour", &ft_ze);
	printf("%s\n", a);
	free(a);
	return (0);
}
*/
