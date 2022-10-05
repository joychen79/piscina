/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:36:58 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/17 17:06:56 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a++;
		b--;
	}
}

/*int	main()
{
	int tab[20] = {-1, 0, 1, 2, 3, 4};

	ft_rev_int_tab(tab, 6);
	printf("%d,%d,%d,%d,%d,%d", tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
	return(0);
}*/
