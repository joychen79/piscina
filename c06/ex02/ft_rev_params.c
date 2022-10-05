/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:05:14 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/27 13:45:04 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write (1, &argv[i][j], 1);
			j++;
			}
			write (1, "\n", 1);
		i--;
		}
	}
	return (0);
}
