/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:46:50 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/17 13:28:17 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	y;

	i = 0;
	while (i <= 98)
	{
		y = i + 1;
		while (y <= 99)
		{
			ft_putchar (i / 10 + '0');
			ft_putchar (i % 10 + '0');
			write (1, " ", 1);
			ft_putchar (y / 10 + '0');
			ft_putchar (y % 10 + '0');
			if (i < 98)
				write (1, ", ", 2);
			y++;
		}
	i++;
	}
}

/*int	main ()
{
	ft_print_comb2();
	return(0);
}*/
