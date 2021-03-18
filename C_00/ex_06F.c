/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-asht <mal-asht@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:35:03 by mal-asht          #+#    #+#             */
/*   Updated: 2021/03/18 11:06:40 by mal-asht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 3);
}


char	switch_to_asci(int reverse_if, char number)
{
	char c;
	if (reverse_if == 1)
	{
		c = number / 10 + '0';
	}
	else
	{
		c = number % 10 + '0';
	}
	
	return (c);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 98)
	{
		a++;
		while (b < 99)
		{
			b++;
		ft_putchar(switch_to_asci(1,a));
		ft_putchar(switch_to_asci(0,b));
			
				if (a >= 9 && b >= 9)
					write(1, "\n", 1);
				else
					write(1, ", ", 2);
			}
		}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
