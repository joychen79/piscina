/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:56:53 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/27 13:40:16 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc = 0;
	{
		while (argv[0][i] != '\0')
		{
			write (1, &argv[0][i], 1);
		i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
