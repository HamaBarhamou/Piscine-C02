/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:01:10 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/16 00:05:08 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowerr(char c)
{
	 if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (is_lowerr(str[i]) == 1 && str[i])
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
	char chaine[]="ariam ";
	printf("%d\n",ft_str_is_lowercase(chaine));
}*/
