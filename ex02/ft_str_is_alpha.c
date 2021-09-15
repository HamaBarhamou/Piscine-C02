/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:39:13 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/15 23:38:45 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (is_alpha(str[i]) == 1 && str[i])
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
	char chaine[]="dah5";
	printf("%d\n",ft_str_is_alpha(chaine));
}*/
