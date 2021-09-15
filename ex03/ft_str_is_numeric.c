/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 23:45:16 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/15 23:58:20 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	 if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (is_number(str[i]) == 1 && str[i])
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
	printf("%d\n",ft_str_is_numeric(chaine));
}*/
