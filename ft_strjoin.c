/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:24:36 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/01 17:24:36 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		dlen;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dlen = len_s1 + len_s2;
	dest = (char *)ft_calloc(sizeof(*dest), dlen + 1);
	if (!dest)
		return (NULL);
	ft_strlcat(dest, s1, len_s1 + 1);
	ft_strlcat(dest, s2, len_s1 + len_s2 + 1);
	return (dest);
}
