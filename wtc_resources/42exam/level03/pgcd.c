/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:24:37 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/16 02:24:37 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char const *argv[])
{
	int		nbr1;
	int		nbr1s;
	int		nbr2s;
	int		nbr2;
	int		gcd;
	
	if (argc == 3)
	{
		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			nbr1s = nbr1;
			nbr2s = nbr2;
			while (1)
			{
				if (nbr1 == 0)
					break ;
				nbr2 %= nbr1;
				if (nbr2 == 0)
					break ;
				nbr1 %= nbr2;
			}
			gcd = (!nbr2) ? nbr1 : nbr2;
			printf("GCD: %d\n", gcd);

			nbr1 = nbr1s;
			nbr2 = nbr2s;
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("NBR1: %d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
