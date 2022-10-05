/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:40:28 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/23 16:18:56 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0' && y < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char	c[50] = "hola te";
	char	b[50] = "de mundo";

	printf("%s\n", ft_strncat (c, b, 4));
	printf("%s\n", strncat (c, b, 4));
	return(0);
}*/
