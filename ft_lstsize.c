/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:54:42 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:27:06 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		compteur;
	t_list	*tmp;

	compteur = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		compteur++;
	}
	return (compteur);
}
/*
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Bonjour");
	lst->next = ft_lstnew("ca");
	lst->next->next = ft_lstnew("va ?");
	printf("%d\n", ft_lstsize(lst));
	return (0);
}
*/
