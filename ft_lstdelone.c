/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:55:57 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:28:16 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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

	lst = ft_lstnew(ft_strdup("eweqwewe"));
	ft_lstdelone(lst, del);
	printf("%s\n", lst->content);
	return (0);
}
*/
