/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:57:03 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:14:38 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "aaaaaaaasd";
	int			c = 115;
	size_t		n = 5;

	printf("%s\n", memchr(s, c, n));
	printf("%s\n", ft_memchr(s, c, n));
	return (0);
}
*/
