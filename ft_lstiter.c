/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:03:21 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:40:33 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/*
void	f(void *str)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (temp[i])
	{
		temp[i] = temp[i] + 1;
		i++;
	}
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("0123"));
	ft_lstiter(lst, f);
	printf("%s\n", lst->content);
	free(lst);
	return (0);
}
*/
