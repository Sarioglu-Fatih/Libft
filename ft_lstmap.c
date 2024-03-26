/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:22:03 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:42:18 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst != NULL)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new, temp);
	}
	return (new);
}
/*
void	*f(void *str)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (temp[i] != '\0')
	{
		temp[i] = temp[i] + 5;
		i++;
	}
	printf("%s\n", temp);
	return (temp);
}

void	del(void *str)
{
	free(str);
	str = NULL;
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("0123"));
	ft_lstmap(lst, f, del);
	printf("%p\n", lst);
	printf("%s\n", lst->content);
	return (0);
}
*/
