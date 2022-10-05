/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:04:21 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/17 13:25:34 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a < '7')
	{	
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	y;
	char	x;

	i = '0';
	while (i <= '7')
	{
		y = i + 1;
		while (y <= '8')
		{
			x = y + 1;
			while (x <= '9')
			{
				ft_putchar(i, y, x);
				x++;
			}	
			y++;
		}
		i++;
	}
}

/*int	main ()

{
	ft_print_comb();
	return(0);
}*/
