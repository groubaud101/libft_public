/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:05:16 by guroubau          #+#    #+#             */
/*   Updated: 2022/10/03 12:05:16 by guroubau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

static int	ft_nbrlen_size_t(size_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	ft_check_mult_len_size(size_t nb1, size_t nb2)
{
	int		len_nb1;
	int		len_nb2;
	int		len_size_max;
	size_t	size_max;

	size_max = -1;
	len_nb1 = ft_nbrlen_size_t(nb1);
	len_nb2 = ft_nbrlen_size_t(nb2);
	len_size_max = ft_nbrlen_size_t(size_max);
	if (len_nb1 + len_nb2 > len_size_max + 1)
		return (1);
	else if (len_nb1 + len_nb2 < len_size_max)
		return (-1);
	return (0);
}

static int	ft_check_is_mult_overflowing(size_t nb1, size_t nb2)
{
	int		check;
	size_t	bigger;
	size_t	smaller;

	if (nb1 == 0 || nb2 == 0)
		return (0);
	check = ft_check_mult_len_size(nb1, nb2);
	if (check == 1)
		return (1);
	else if (check == -1)
		return (0);
	bigger = nb1;
	smaller = nb2;
	if (nb1 < nb2)
	{
		bigger = nb2;
		smaller = nb1;
	}
	if ((((bigger / 10) * smaller) > SIZE_MAX / 10)
		|| ((((bigger / 10) * smaller) == SIZE_MAX / 10)
			&& (((bigger % 10) * (smaller % 10)) % 10 > SIZE_MAX % 10)))
		return (1);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;
	size_t	index;
	size_t	mult;

	if (ft_check_is_mult_overflowing(nmemb, size) == 1)
		return (NULL);
	index = 0;
	mult = nmemb * size;
	array = (char *)malloc(mult);
	if (array == NULL)
		return (NULL);
	while (index < mult)
		array[index++] = 0;
	return ((void *)array);
}
