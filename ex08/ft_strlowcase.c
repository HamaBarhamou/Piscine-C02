/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:35:52 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/16 15:45:51 by bissaka-         ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = lower(str[i]);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char chaine[]="ISSAKA HAMA BARHAMOU, ALIAS BISSAKA PRESIDENT\n";
	printf("%s\n",ft_strlowcase(chaine));
}*/
