/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:24:17 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/01 17:24:17 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (n == 0)
		return (0);
	n--;
	index = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (index < n && tmp1[index] == tmp2[index])
		index++;
	if (index == n)
		return (0);
	if (tmp1[index] > tmp2[index])
		return (1);
	else if (tmp1[index] < tmp2[index])
		return (-1);
	return (0);
}
