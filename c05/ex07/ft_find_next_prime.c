/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:27:21 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/28 18:45:30 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return (0);
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdlib.h>
int main (int argc, char **argv)
{
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
			return(0);
}*/
