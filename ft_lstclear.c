/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:11:16 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:28:27 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(temp);
	}
	free(*lst);
}
/*
void	del(void *str)
{
	free(str);
	str = NULL;
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("Bonjour"));
	ft_lstclear(&lst, del);
	printf("%p\n", lst);
	return (0);
}
*/
