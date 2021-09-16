/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:14:15 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/16 15:32:43 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	upper(char c)
{
	char	car;

	if (c >= 'a' && c <= 'z')
		car = c + 'A' - 'a';
	else
		car = c;
	return (car);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char chaine[]="issaka hama barhamou, alias bissaka president";
	printf("%s\n",ft_strupcase(chaine));
}*/
