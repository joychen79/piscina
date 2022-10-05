/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:40:18 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/27 17:15:51 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	x;

	i = 0;
	y = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		y++;
	}
	if (i >= size)
		return (y + size);
	while (src[x] != '\0' && (i + x) < (size -1))
	{
		dest[i + x] = src[x];
		x++;
	}	
	dest[i + x] = '\0';
	return (i + y);
}

int main ()
{
	char	a[] = "xxxxxxx";
	char	b[] = "ffff";
	printf("%u\n", ft_strlcat(a, b, 5));	
//	printf("%lu\n", strlcat(a, b, 7));
	return(0);
}
