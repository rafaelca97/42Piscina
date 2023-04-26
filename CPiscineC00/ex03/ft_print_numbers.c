/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelca <rafaelca@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:26:59 by rafaelca          #+#    #+#             */
/*   Updated: 2023/03/15 11:31:54 by rafaelca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	int	number;
	{
		number = '0';
		while (number <= '9')
		{
			write(1, &number, 1);
			number++;
		}
	}
}
