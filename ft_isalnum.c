/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:23:34 by groubaud          #+#    #+#             */
/*   Updated: 2021/04/01 17:23:34 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	int i = -1;

	while (i < 340)
	{
		if ((isalnum(i) == 0 && ft_isalnum(i)) || (isalnum(i) && ft_isalnum(i) == 0))
		{
			printf("i : %i, sys : |%i| ft : |%i|\n", i, isalnum(i), ft_isalnum(i));
			printf("isalpha : %i, isdigit : %i\n\n", isalpha(i), isdigit(i));
		}
		i++;
	}
}*/