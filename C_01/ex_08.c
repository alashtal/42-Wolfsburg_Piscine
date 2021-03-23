/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-asht <mal-asht@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:07:21 by mal-asht          #+#    #+#             */
/*   Updated: 2021/03/23 13:47:01 by mal-asht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_sort_int_tab(int *tab, int size)
{
	int i;
	int buffer_number;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			buffer_number = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = buffer_number;
			i = 0;
		}
		else
			i++;
	}
}
