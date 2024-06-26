/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa <gbarbosa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:10:07 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/21 20:43:10 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main()
{
	int	x;
	int	y;

	x = 5;
	y = 2;
	ft_swap(&x, &y);
	printf("valor de x %d e valor de y %d ", x, y);
}*/
