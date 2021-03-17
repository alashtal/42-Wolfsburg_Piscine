/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-asht <mal-asht@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:35:03 by mal-asht          #+#    #+#             */
/*   Updated: 2021/03/17 19:36:53 by mal-asht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0' - 1;
	while (a < '7')
	{
		a++;
		b = a;
		while (b < '8')
		{
			b++;
			c = b;
			while (c++ < '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
		if (a >= '7')
				write(1, "\n", 1);
			else
				write(1,", ", 2);
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
