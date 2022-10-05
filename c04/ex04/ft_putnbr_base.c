/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:29:36 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/27 13:11:33 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_checkerror(char *base)
{
	int	i;
	int	len;
	int	y;

	i = 0;
	len = ft_baselen(base);
	y = i + 1;
	if (base[0] == '\0' || len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base [i] <= 32 || base [i] == 127
			|| base[i] == '+' || base[i] == '-')
			return (0);
		while (y < len)
		{
			if (base[i] == base[y])
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		size;

	nb = nbr;
	size = ft_baselen(base);
	if (ft_checkerror(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar ('-');
			nb *= -1;
		}
		if (nb < size)
		{
			ft_putchar (base[nb]);
		}
		else if (nb >= size)
		{
			ft_putnbr_base (nb / size, base);
			ft_putnbr_base (nb % size, base);
		}
	}
}

/*int main ()
{	
	char base[] = "poniguay";
	ft_putnbr_base (17, base);
	write (1, "\n", 1);
	ft_putnbr_base (17, "0123456789abcdef");
	return (0);
}*/
