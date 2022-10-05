/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:23:22 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/01 18:22:51 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	dest = malloc(sizeof(int) * (max - min));
	*range = dest;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (dest == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (max > min)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*int main()
{
	int *tab;
	int i = 0;
	int size;

	size = ft_ultimate_range(&tab, 4, 9);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}*/
