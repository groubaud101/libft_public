/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:24:41 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/01 17:24:41 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void	ft_inc_s(char **dst, const char **src)
{
	**dst = **src;
	(*dst)++;
	(*src)++;
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		len;
	const char	*osrc;

	len = size;
	osrc = src;
	if (len != 0)
	{
		while (--len != 0 && *src != '\0')
			ft_inc_s(&dst, &src);
		if (len != 0)
			ft_inc_s(&dst, &src);
	}
	if (len == 0)
	{
		if (size != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - osrc - 1);
}
