/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:26:57 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/27 20:09:19 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*int	main ()
{
	printf("%d\n", ft_recursive_power(5, 1));
	return (0);
}*/
