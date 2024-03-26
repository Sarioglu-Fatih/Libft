/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:24:32 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:11:27 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < dstsize)
		i++;
	if (i < dstsize)
	{
		while (i < dstsize - 1 && src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}
/*
int	main(void)
{
	char		a[15] = "";
	const char	*b = " bonjour";
	size_t		c = 4;

	printf("MO : %lu\n", ft_strlcat(a, b, c));
	printf("VR : %zu\n", strlcat(a, b, c));
	return (0);
}
*/
