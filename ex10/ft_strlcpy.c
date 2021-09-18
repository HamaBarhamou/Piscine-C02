/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:07:53 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/16 18:39:51 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	nsigned int	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char chaine[]="ISSAKA HAMA BARHAMOU, ALIAS BISSAKA/PRESIDENT\n";
	char ch[100];
	printf("tail: %d ch: %s\n",ft_strlcpy(ch,chaine,25),ch);
}*/
