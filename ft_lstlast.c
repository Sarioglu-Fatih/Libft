/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:02:53 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:38:49 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
		return (lst);
	}
	return (NULL);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*temp;

	lst = ft_lstnew("Bonjour ");
	lst->next = ft_lstnew("ca ");
	lst->next->next = ft_lstnew("va ?");
	temp = lst;
	lst = ft_lstlast(lst);
	printf("%s\n", lst->content);
	while (temp != 0)
	{
		free(temp);
		temp = temp->next;
	}
	return (0);
}
*/
