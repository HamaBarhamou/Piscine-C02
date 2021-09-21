/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:37:28 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/21 01:15:04 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char chaine[]=" ";
	printf("%d\n",ft_str_is_printable(chaine));
	return (0);
}*/
