/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelca <rafaelca@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:20:51 by rafaelca          #+#    #+#             */
/*   Updated: 2023/03/15 11:33:07 by rafaelca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	{
		letter = 'z';
		while (letter >= 'a')
		{
			write(1, &letter, 1);
			letter--;
		}
	}
}
