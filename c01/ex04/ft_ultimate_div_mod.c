/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:44:49 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/17 17:05:37 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a % *b;
	*a = *a / *b;
	*b = i;
}

/*int	main ()
{
	int i;
	int y;
	int *a;
	int *b;

	a = &i;
	b = &y;
	i = 20;
	y = 3;
	ft_ultimate_div_mod(&i, &y);
	printf("%d, %d",*a, *b);
	return(0);

}*/
