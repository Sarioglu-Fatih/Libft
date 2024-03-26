/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:33:53 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:10:06 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	i = 0;
	d = (char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* 
int	main(int ac, char **av)
{
	char		*dest = av[1];
	const char	*src = av[2];
	char		*d = av[1];
	const char	*s = av[2];
	size_t		n = 3;
	size_t		m = 3;

	ft_putstr(ft_memcpy(&dest, &src, n));
	ft_putchar('\n');
	ft_putstr(memcpy(&d, &s, m));
	return (0);
}
*/
