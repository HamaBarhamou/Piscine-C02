/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:58:13 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/15 21:37:00 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char *m1;
	//unsigned int n=10;
	m1=malloc(100);
	char *m2="Mariam joue a la balle depuis toujour";
	m1=ft_strncpy(m1,m2,10);
	printf("%s\n",m1);
}*/
