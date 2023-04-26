/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print:program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelca <rafaelca@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:55:21 by rafaelca          #+#    #+#             */
/*   Updated: 2023/03/30 17:23:48 by rafaelca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argcv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		while (argcv[0][i] != '\0')
		{
			write(1, &argcv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
