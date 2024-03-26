/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:59:05 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:26:53 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	c = malloc(count * size);
	if (!c)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}
/*
int	main(void)
{
	char	*machin;
	size_t	c = 2;
	size_t	s = 8;
	int		i;

	i = 0;
	machin = ft_calloc(c, s);
	while (i < 16)
	{
		ft_putchar(machin[i] + '0');
		i++;
	}
	free(machin);
	ft_putchar('\n');
	ft_putchar(machin[0] + '0');
	ft_putchar('\n');
	ft_putchar(machin[1] + '0');
	return (0);
}
*/
