/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:53:29 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/21 21:31:10 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	lower(char c)
{
	char	car;

	if (c >= 'A' && c <= 'Z')
		car = c - 'A' + 'a';
	else
		car = c;
	return (car);
}

char	upper(char c)
{
	char	car;

	if (c >= 'a' && c <= 'z')
		car = c + 'A' - 'a';
	else
		car = c;
	return (car);
}

int	is_alpha_or_number(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (!is_alpha_or_number(str[i]))
			i++;
		str[i] = upper(str[i]);
		i++;
		while (is_alpha_or_number(str[i]))
		{
			str[i] = lower(str[i]);
			i++;
		}
		i++;
	}
	return (str);
}

/*
#include<stdio.h>
int	main(void)
{
	char chaine[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",ft_strcapitalize(chaine));
}*/
