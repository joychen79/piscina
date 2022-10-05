/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:43:06 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/18 19:27:36 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
//#include<string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main()
{
	char	c[] = "hola MUNDo";

	printf("%s", ft_strupcase(c));
	return (0);
}*/
