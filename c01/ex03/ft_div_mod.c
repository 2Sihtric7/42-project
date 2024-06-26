/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa <gbarbosa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:49:30 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/21 20:47:59 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int	x;
	int	y;
	int	g;
	int	u;

	x = 8;
	y = 2;
	ft_div_mod(x, y, &g, &u);
	printf("mostrar a divisão: %d ", g);
	printf("mostrar modulo: %d ", u);
}*/
