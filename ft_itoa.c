/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:00:08 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:32:13 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoas(int n, char *str, long long int nb, int count)
{
	if (n < 0)
		str[0] = '-';
	str[count] = '\0';
	nb = n;
	if (nb < 0)
		nb = nb * -1;
	count--;
	if (n == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[count] = (nb % 10) + '0';
		nb = nb / 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long int	nb;
	int				count;

	count = 0;
	nb = (long long int)n;
	if (n == 0)
		count++;
	if (n < 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	return (ft_itoas(n, str, nb, count));
}
/*
int	main(void)
{
	char			*s;

	s = ft_itoa(214748364);
	printf("%s\n", s);
	free(s);
	return (0);
}
*/
