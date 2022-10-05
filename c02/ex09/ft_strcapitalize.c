/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:47:48 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/18 19:36:27 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
			i++;
	}	
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| str[i] >= 123)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main ()
{
	char c[] = " salut, :coIit tu |vas ? 42mOUots ntLLe-deux; cinqute+et+un";

	printf("%s", ft_strcapitalize(c));

	return (0);
}*/
