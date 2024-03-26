/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:48:57 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:29:50 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_endof_strtrim(char const *s1, char const *set, int j)
{
	int	k;

	k = 0;
	while (s1[j] != '\0')
		j++;
	j--;
	while (j > 0 && set[k] != '\0')
	{
		k = 0;
		while (set[k] != '\0' && set[k] != s1[j])
			k++;
		j--;
	}
	j++;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	if (set[0] == '\0')
		return (ft_substr(s1, 0, ft_strlen(s1)));
	while (s1[i] != '\0' && set[k] != '\0')
	{
		k = 0;
		while (set[k] != '\0' && set[k] != s1[i])
			k++;
		i++;
	}
	if (s1[i] == '\0')
		return (ft_calloc(1, 1));
	i--;
	j = 0;
	j = ft_endof_strtrim(s1, set, j);
	return (ft_substr(s1, i, (j - i + 1)));
}
/*
int	main(void)
{
	char const	*s1 = "//..zz//..zz////bonjour//zz..//zz..";
	char const	*set = "./z";
	char		*str;

	str = ft_strtrim(s1, set);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
