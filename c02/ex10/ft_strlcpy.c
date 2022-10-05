/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:03:31 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/18 19:44:47 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	pos;
	unsigned int	count;

	pos = 0;
	count = ft_strlen(src);
	if (size != 0)
	{
		while (src[pos] != '\0' && pos < size - 1)
		{
			dest [pos] = src[pos];
			pos++;
		}
		dest[pos] = '\0';
	}
	return (count);
}

/*int	main ()
{
	char src[] = "mundo";
	
	char dest[] = "ho";

	printf("%d\n", ft_strlcpy(dest, src, 3));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, src, 3));
	printf("%s\n", dest);
	return (0);
}*/
