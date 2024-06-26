/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa <gbarbosa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:34:38 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/25 23:03:47 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 65
			&& str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main()
{
	char	str[] = "8";

	printf("mostrar: %d ", ft_str_is_uppercase(str));
}*/
