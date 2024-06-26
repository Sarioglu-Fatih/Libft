/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:32:50 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/05 11:52:01 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int nb)
{
	if (nb >= 'A' && nb <= 'Z')
		nb = nb + 32;
	return (nb);
}

/* int	main(void)
{
	ft_putnbr(ft_tolower(65));
	return (0);
}
 */
