/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 20:28:09 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/15 20:28:09 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		gcd;
	int		old_a;
	int		old_b;

	old_a = a;
	old_b = b;
	while (1)
	{
		if (a == 0)
			break ;
		b %= a;
		if (b == 0)
			break ;
		a %= b;
	}
	gcd = (!b) ? a : b;
	printf("GCD:  %d\n", gcd);
	return (gcd ? ((old_a * old_b) / gcd)  : 0);
}

unsigned int	lcm2(unsigned int a, unsigned int b)
{
	int		lcm;

	lcm = a > b ? a: b;
	if (!a || !b)
		return (0);
	while (lcm)
	{
		if (!(lcm % a) && !(lcm % b))
			return (lcm);
		lcm++;
	}
	return (lcm);
}

int main()
{
	printf("LCM:  %d\n", lcm(30,9));
	return (0);
}


