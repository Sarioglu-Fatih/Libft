/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:45:10 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/29 13:31:01 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		d;
	int		f;
	int		l;
	char	**str;

	f = 0;
	l = 0;
	if (!s)
		return (0);
	str = (char **)ft_calloc(ft_count_words(s, c) + 1, sizeof (char *));
	if (!str)
		return (NULL);
	while (s[f] != '\0')
	{
		while (s[f] == c && s[f] != '\0')
			f++;
		d = f;
		while (s[f] != c && s[f] != '\0')
			f++;
		if (s[f] != '\0' || s[f - 1] != c)
			str[l++] = ft_substr(s, d, (f - d));
	}
	str[l] = NULL;
	return (str);
}
/*
int	main(void)
{
	int		i;
	char	c = ' ';
	char	*s = "      split       this for   me  !       ";
	char	**str;

	i = 0;
	str = ft_split(s, c);
	while (str[i])
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	return (0);
}
*/
