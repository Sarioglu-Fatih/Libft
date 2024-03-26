/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:15:34 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:09:48 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/* int	main(void)
{
	size_t	a[] = {10, 15, 20};
	char	str[] = "bonjour";
	size_t	n = 3;
	int		i;

	i = 0;
	bzero(&str, n);
	while (i <= 7)
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	i = 0;
	ft_bzero(&str, n);
	while (i <= 7)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
} */
