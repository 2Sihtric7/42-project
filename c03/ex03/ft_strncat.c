/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa <gbarbosa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 06:19:34 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/27 14:32:44 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
		c++;
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

/*int	main()
{
	char	dest[] = "galinn";
	char	src[] = "gostoso";

	printf("%s ", ft_strncat(dest, src, 5));
}*/
