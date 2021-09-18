/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:46:11 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/18 16:38:22 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_printable(char c)
{
	 if (c >= '!' && c <= '~')
		return (1);
	else
		return (0);
}

char	lower(char c)
{
	char	car;

	if (c >= 'A' && c <= 'Z')
		car = c - 'A' + 'a';
	else
		car = c;
	return (car);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "?2?", 3);
		}
		i++;
	}
}

/*int	main(void)
{
	char chaine[]="ISSAKA HAMA BARHAMOU, ALIAS BISSAKA/PRESIDENT\n";
	ft_putstr_non_printable(chaine);
}*/