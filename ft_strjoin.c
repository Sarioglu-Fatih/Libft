/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:31:41 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:19:43 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (NULL);
	j = -1;
	while (s1[++j] != '\0')
		str[j] = s1[j];
	i = 0;
	str[j] = 'a';
	while (s2[i] != '\0')
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{
	char		*str;
	char const	*s1 = "my favorite animal is ";
	char const	*s2 = "the nyancat";

	str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
