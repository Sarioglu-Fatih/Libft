/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:46:55 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:33:53 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
	{	
		new->next = *alst;
		*alst = new;
	}
	else
		*alst = new;
}
/*
int	main(void)
{
	t_list	*str;
	t_list	*new;

	new = ft_lstnew("Bonjour ");
	str = ft_lstnew("tout ");
	str->next = ft_lstnew("le ");
	str->next->next = ft_lstnew("monde");
	ft_lstadd_front(&str, new);
	while (str)
	{
		printf("%s\n", str->content);
		free(str);
		str = str->next;
	}
	return (0);
}
*/
