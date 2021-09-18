/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:53:29 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/16 16:54:35 by bissaka-         ###   ########.fr       */
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

int	is_separator(char c)
{
	int	test1;
	int	test2;

	test1 = c == ' ' || c == '\n' || c == ',' || c == ';';
	test2 = c == '+' || c == '-' || c == '?' || c == '/';
	if (test1 || test2)
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
		while (is_separator(str[i]))
			i++;
		str[i] = upper(str[i]);
		i++;
		while (!is_separator(str[i]))
		{
			str[i] = lower(str[i]);
			i++;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char chaine[]="ISSAKA HAMA BARHAMOU, ALIAS BISSAKA/PRESIDENT\n";
	printf("%s\n",ft_strcapitalize(chaine));
}*/
