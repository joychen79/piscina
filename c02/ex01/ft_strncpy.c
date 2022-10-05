/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:26:12 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/18 18:42:08 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/*int	main ()
{
	char a[50] = "hola mundo";
	char b[50] = "nuiubteuuebuebu";
	ft_strncpy (b, a, 3);
	printf("%s\n", b);
	strncpy(b, a, 3);
	printf("%s\n", b);
	return(0);
}*/
