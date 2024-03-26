/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:12:21 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:09:35 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void	*s, int c, size_t len)
{
	size_t			i;
	unsigned char	*param;

	i = 0;
	param = (unsigned char *)s;
	while (i < len)
	{
		param[i] = c;
		i++;
	}
	return (param);
}

/* int	main(void)
{
	int				f[] = {-10, 15, 20};
	unsigned int	*x;
	char			*a;
	unsigned char	b[] = "bonjour";
	size_t			y = 1;

//	a = memset(b, 65, 4);
//	ft_putstr(a);
//	ft_putchar('\n');
	x = memset(f, 256, y);
	ft_putnbr(x[0]);
	ft_putchar(' ');
	ft_putnbr(x[1]);
	ft_putchar(' ');
	ft_putnbr(x[2]);
	return (0);
} */
