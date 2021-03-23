/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-asht <mal-asht@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:05:45 by mal-asht          #+#    #+#             */
/*   Updated: 2021/03/23 12:26:37 by mal-asht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int last_number;
	int buffer_number;

	last_number = size - 1;
	index = 0;
	while (index < last_number)
	{
		buffer_number = tab[index];
		tab[index] = tab[last_number];
		tab[last_number] = buffer_number;
		last_number--;
		index++;
	}
}
