/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymisbah <aymisbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:09:22 by aymisbah          #+#    #+#             */
/*   Updated: 2024/11/13 11:21:09 by aymisbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	if (count == 0 || size == 0)
		return (malloc(0));
	if ((int)count < 0 || (int)size < 0)
		return (NULL);
	p = (void *)malloc(size * count);
	if (!p)
		return (NULL);
	i = 0;
	while (size * count > i)
		p[i++] = 0;
	return ((void *) p);
}
