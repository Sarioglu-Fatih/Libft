/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:12:41 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:10:53 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dest);
}
/*
int	main(void)
{
	const char	b[] = "bonjour";
	char		a[] = "salut";
	const char	d[] = "bonjour";
	char		c[] = "salut";


	int			n = 6;
	int			m = 6;

	printf("%s\n", ft_memmove(a, b, n));
	printf("%s\n", memmove(c, d, m));
	return (0);
}
*/
