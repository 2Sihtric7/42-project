/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa < gbarbosa@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 03:48:22 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/27 13:52:46 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
		c++;
	while (src[i] != '\0')
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
	char	dest[] = "vai ";
	char	src[] = "tomando";

	printf("%s ", ft_strcat(dest, src));
}*/
