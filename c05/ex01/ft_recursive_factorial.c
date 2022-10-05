/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:40:20 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/28 11:37:02 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

/*int	main()
{
	printf("%d\n", ft_recursive_factorial(5));
	return(0);
}*/
