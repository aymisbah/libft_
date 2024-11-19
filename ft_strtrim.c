/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:01:24 by aymisbah          #+#    #+#             */
/*   Updated: 2024/11/11 23:50:11 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chech_e(char *s1, int c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		start;
	size_t		end;
	char		*s3;

	s3 = (char *)s1;
	if (!s1)
		return (NULL);
	if (!set || !*set || !*s1)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s3[start] && (chech_e((char *)set, s3[start]) == 1))
		start++;
	while (s1[end] && (chech_e((char *)set, s3[end]) == 1 && end > 0))
		end--;
	str = ft_substr(s1, start, (end - start + 1));
	return (str);
}
