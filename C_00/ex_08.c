/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-asht                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:15:29 by yshi              #+#    #+#             */
/*   Updated: 2021/03/11 20:51:37 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	combn_ascend(int start, char *arr, int index, int size)
{
	if (index == size)
	{
		while ((index - size) < size)
		{
			ft_putchar(arr[index - size]);
			if ((index - size == size - 1)
			&& (arr[index - index] != 10 - size + '0'))
				write(1, ", ", 2);
			index++;
		}
	}
	while (start <= 9)
	{
		arr[index] = '0' + start;
		start++;
		combn_ascend(start, arr, index + 1, size);
	}
}

void	ft_print_combn(int n)
{
	int		start;
	int		index;
	char	arr[n];

	start = 0;
	index = 0;
	combn_ascend(start, arr, index, n);
}
