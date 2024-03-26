/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:29:47 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:16:09 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (n[i] == '\0')
		return (h);
	while (h[i] != '\0' && i < len)
	{
		while (h[i + j] == n[j] && i + j < (len))
		{	
			if (n[j + 1] == '\0')
				return (&h[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*h = "bonjour";
	const char	*n = "";
	size_t		l = 11;

	printf("%s\n", ft_strnstr(h, n, l));
	printf("%s\n", strnstr(h, n, l));
	return (0);
}
*/
