/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:50:21 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:39:14 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*none;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	none = *alst;
	none = ft_lstlast(none);
	none->next = new;
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*temp;

	lst = ft_lstnew("Bonjour ");
	ft_lstadd_back(&lst, ft_lstnew("tout "));
	ft_lstadd_back(&lst, new);
	temp = lst;
	while (temp != NULL)
	{
		printf("%s\n", temp->content);
		free(temp);
		temp = temp->next;
	}
	return (0);
}
*/
