/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:04:05 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/17 13:20:54 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n)
{
	char	comb[9];
	int		pos;

	pos = 0;
	comb[0] = '0' - 1;
	while (comb[0] < 10 + '0' - n)
	{
		while (comb[pos] >= 10 - n + pos + '0')
			pos--;
		comb[pos]++;
		while (pos < n - 1)
		{
			pos ++;
			comb[pos] = comb[pos - 1] + 1;
		}
		while (comb[pos] <= 10 - n + pos + '0')
		{
			write (1, comb, n);
			if (comb[0] < 10 - n + '0')
				write (1, ", ", 2);
			comb[pos]++;
		}
	}	
}
/*int	main ()
{
	ft_print_combn(6);
	return(0);
}*/
