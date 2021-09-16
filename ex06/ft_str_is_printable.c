/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:37:28 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/16 15:08:06 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	 if (c >= '!' && c <= '~')
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (is_printable(str[i]) == 1 && str[i])
		i++;
	if (str[0] == '\0' || str[0] == '\n')
		return (1);
	if (str[i] == '\0' || str[i] == '\n')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char chaine[]=" ";
	printf("%d\n",ft_str_is_printable(chaine));
}*/
