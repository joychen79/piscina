/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:40:36 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/28 12:03:59 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while (sqrt < 46341)
		{
			if (sqrt * sqrt == nb)
			{
				return (sqrt);
			}
		sqrt++;
		}
	}
	return (0);
}

/*int main()
{
	printf("%d\n", ft_sqrt (81));
	return(0);
}*/
