/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelca <rafaelca@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:42:17 by rafaelca          #+#    #+#             */
/*   Updated: 2023/03/15 12:35:41 by rafaelca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	num;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 2147483647)
		write(1, "2147483647", 10);
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			num = nb + 48;
			write(1, &num, 1);
		}
	}
}
