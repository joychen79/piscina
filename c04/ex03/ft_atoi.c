/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:04:46 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/27 13:06:54 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	x;

	i = 0;
	nb = 0;
	x = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			x = x * -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str [i] <= '9'))
	{
		nb *= 10;
		nb += str[i] - '0';
	i++;
	}
	nb = nb * x;
	return (nb);
}

/*int main ()
{
	char c[] = " --+--+1234891ab567";
	printf("%d\n", ft_atoi(c));
	int val = atoi(c);
	printf("%d\n",val);
		return (0);
}*/
