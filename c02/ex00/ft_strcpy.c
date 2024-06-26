/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa < gbarbosa@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:42:31 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/25 19:12:02 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main()
{
	char	dst[12];
	char	stc[12] ="Guilherme!";

	*ft_strcpy(dst, stc);
	printf("mostrar Dest: %s\n", dst);
	printf("mostrar Src: %s", stc);	
}*/
