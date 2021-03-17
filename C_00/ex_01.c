/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-asht <mal-asht@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:30:30 by mal-asht          #+#    #+#             */
/*   Updated: 2021/03/17 10:33:15 by mal-asht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char first_letter;

	first_letter = 'a';
	while (first_letter <= 'z')
	{
		write(1, &first_letter, 1);
		first_letter++;
	}
}
