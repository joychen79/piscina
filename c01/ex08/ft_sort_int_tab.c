/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:49:12 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/17 16:57:40 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[i] > tab[y])
			{
				temp = tab[i];
				tab[i] = tab[y];
				tab[y] = temp;
			}
			y++;
		}
		i++;
	}
}

/*int	main ()
{
	int tab[] = {1, 2, 4, 0, -2, 3, -1};
	
	ft_sort_int_tab(tab, 7);

	printf("%d,", tab[0]);
	printf("%d,", tab[1]);
	printf("%d,", tab[2]);
	printf("%d,", tab[3]);
	printf("%d,", tab[4]);
	printf("%d,", tab[5]);
	printf("%d", tab[6]);
}*/
