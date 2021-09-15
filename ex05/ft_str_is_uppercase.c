/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:09:21 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/16 00:13:50 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	 if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (is_upper(str[i]) == 1 && str[i])
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
	char chaine[]="HAMAb";
	printf("%d\n",ft_str_is_uppercase(chaine));
}*/
