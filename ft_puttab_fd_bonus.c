/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab_fd_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:21:39 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/02 13:21:39 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab_fd(char **tab, char *sep, int fd)
{
	int		index;

	index = 0;
	if (!tab || !tab[index])
		return ;
	while (tab[index])
	{
		ft_putstr_fd(tab[index], fd);
		index++;
		if (tab[index])
			ft_putstr_fd(sep, fd);
	}
	ft_putchar_fd('\n', fd);
}
