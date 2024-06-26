/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa <gbarbosa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:54:39 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/25 23:02:21 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97
			&& str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main()
{
	char	str[] = ""; 

	ft_str_is_lowercase(str);
	printf("mostrar: %d ", ft_str_is_lowercase(str));
}*/
