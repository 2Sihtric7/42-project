/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarbosa <gbarbosa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:02:39 by gbarbosa          #+#    #+#             */
/*   Updated: 2024/06/23 03:39:49 by gbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int   main()
{
        int     valor;
        int     *nbr = &valor;
        int     **nbr2 = &nbr;
        int     ***nbr3 = &nbr2;
        int     ****nbr4 = &nbr3;
        int     *****nbr5 = &nbr4;
        int     ******nbr6 = &nbr5;
        int     *******nbr7 = &nbr6;
        int     ********nbr8 = &nbr7;
        ft_ultimate_ft(&nbr8);
        printf("valor, %d\n", valor);
}
