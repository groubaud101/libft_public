/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:47:49 by guroubau          #+#    #+#             */
/*   Updated: 2022/10/03 11:47:49 by guroubau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	index;
	char	*tmp;

	index = 0;
	tmp = (char *)s;
	while (index < n)
	{
		tmp[index] = '\0';
		index++;
	}
	s = (void *)tmp;
}
