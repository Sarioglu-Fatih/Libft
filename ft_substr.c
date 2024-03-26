/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:43:25 by fsariogl          #+#    #+#             */
/*   Updated: 2021/11/28 17:18:01 by fsariogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ns;

	i = 0;
	if (!s)
		return (0);
	while (i <= start)
	{
		if (s[i] == '\0')
			return (ft_calloc(1, 1));
		i++;
	}
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	i = 0;
	ns = malloc(sizeof(char) * len + 1);
	if (!ns)
		return (NULL);
	while (i < len && s[start] != '\0')
		ns[i++] = s[start++];
	ns[i] = '\0';
	return (ns);
}
/*
int	main(void)
{
	char			*str;
	char const		 *s = "B";
	unsigned int	start = 3;
	size_t			len = 4;

	str = ft_substr(s, start, len);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
