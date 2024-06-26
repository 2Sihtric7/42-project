/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa <gbarbosa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:56:54 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/21 20:48:27 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*int	main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("mostrar divisão %d ", x);
	printf("mostrar resto %d ", y);
}*/
