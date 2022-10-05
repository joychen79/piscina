/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:56:17 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/23 18:29:32 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (to_find[y] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + y] != '\0' && str[i + y] == to_find[y])
		{
			y++;
		}		
		if (to_find[y] == '\0')
			return (&str[i]);
		i++;
		y = 0;
	}
	return (0);
}

/*int main (void)
{
	char str[50] = "sheshelñl";
	char to_find[50] = "";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}*/
