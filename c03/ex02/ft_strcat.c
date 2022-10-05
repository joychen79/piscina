/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:40:03 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/23 16:18:34 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
//#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (void)
{
	char dest[50] = "hello";
	char src[50] = " world";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest, src));
	return(0);
}*/
