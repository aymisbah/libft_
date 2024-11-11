/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:39:10 by aymisbah          #+#    #+#             */
/*   Updated: 2024/11/11 13:15:36 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		s_len;

	s_len = ft_strlen(s);
	a = (char *)s;
	while (s_len)
	{
		if (a[s_len] == (char) c)
			return (a + s_len);
		s_len--;
	}
	if (a[0] == (char)c)
		return (a);
	return (NULL);
}
