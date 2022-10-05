/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:03:08 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/23 16:18:15 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	valor;

	i = 0;
	valor = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		valor = (s1[i] - s2[i]);
		if (s1[i] != s2[i])
			return (valor);
		i++;
	}
	return (valor);
}

/*int main(void)
{
	char a[] = "hola mundo";
	char b[] = "hola mundo";
	
	printf("%i\n", ft_strncmp(a, b, 8));
	printf("%i\n", strncmp(a, b, 8));
	return (0);
}*/
