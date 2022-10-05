/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:05:17 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/01 18:17:38 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	dest = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		return (0);
	}
	if (dest == 0)
	{
		return (0);
	}
	while (max > min)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

/*int main ()
{
	int *tab;
	int i = 0;
	int size;
	int min;
	int max;

	min = 4;
	max = 9;

	size = max - min;
	tab = ft_range(min, max);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
