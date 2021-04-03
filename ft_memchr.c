/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:24:15 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/01 17:24:15 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*tmp;

	index = 0;
	c = c % 256;
	tmp = (char *)s;
	while (index < n)
	{
		if (tmp[index] == c)
			return ((void *)tmp + index);
		index++;
	}
	return (NULL);
}
