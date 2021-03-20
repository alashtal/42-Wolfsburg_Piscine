/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-asht <mal-asht@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:35:03 by mal-asht          #+#    #+#             */
/*   Updated: 2021/03/18 21:33:34 by mal-asht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	switch_to_asci(int number)
{
	number = number + 48;
	write(1, &number, 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			switch_to_asci(a / 10);
			switch_to_asci(a % 10); 
			write(1, " ", 1);
			switch_to_asci(b / 10); 
			switch_to_asci(b % 10);
			if (!(a == 98))
				write(1, ",", 1);
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}
