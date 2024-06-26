/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa < gbarbosa@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 03:48:22 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/26 06:03:48 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i; //variavel
	int	c; //variavel

	i = 0; //inicializa para percorrer
	c= 0; //inicializa para percorrer
	while (dest[c] != '\0') //percorrer até encontrar o final da string
		c++;
	while (src[i] !='\0') //percorrer até encontrar o final da string
	{
		dest[c] = src[i]; //copia cada caracter de src para dest
		i++;
		c++;
	}
	dest[c] = '\0'; //adiciona o final da string
	return (dest); //retorna o ponteiro para dest com os caracter de src
}

/*int	main()
{
	char	dest[] = "vai ";
	char	src[] = "tomando";

	printf("%s ", ft_strcat(dest, src));
}*/
