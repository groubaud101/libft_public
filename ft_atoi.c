/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:23:20 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/01 17:23:20 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(int c)
{
	c = c % 256;
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == ' ')
		return (1);
	return (0);
}

static int	ft_check_atoi(const char *nbr)
{
	int	index;

	index = 0;
	while (ft_isspace(nbr[index]) == 1)
		index++;
	if (nbr[index] != '+' && nbr[index] != '-' && ft_isdigit(nbr[index]) == 0)
		return (0);
	if (nbr[index] == '+' || nbr[index] == '-')
		index++;
	if (ft_isdigit(nbr[index]) == 0)
		return (0);
	return (1);
}

int	ft_atoi(const char *nbr)
{
	int	index;
	int	nb;
	int	mult;

	index = 0;
	nb = 0;
	mult = 1;
	if (ft_check_atoi(nbr) == 0)
		return (ATOI_ERROR);
	while (ft_isspace(nbr[index]) == 1)
		index++;
	if (nbr[index] == '+' || nbr[index] == '-')
		index++;
	while (ft_isdigit(nbr[index]) == 1)
		index++;
	index--;
	while (index >= 0 && ft_isdigit(nbr[index]) == 1)
	{
		nb = (nbr[index] - '0') * mult + nb;
		mult *= 10;
		index--;
	}
	if (index >= 0 && nbr[index] == '-')
		return (-nb);
	return (nb);
}
