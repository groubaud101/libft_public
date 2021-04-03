/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:23:33 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/01 17:23:33 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;
	size_t	index;

	index = 0;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	if (nmemb * size > 2147483647)
		return (NULL);
	array = (char *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	while (index < (nmemb * size))
		array[index++] = 0;
	return ((void *)array);
}
