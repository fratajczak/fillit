/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 03:23:04 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/06 03:32:20 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int n)
{
	unsigned int ncopy;
	unsigned int i;

	i = 1000000000;
	ncopy = ABS(n);
	if (n < 0)
		ft_putchar('-');
	while (ncopy != 0)
	{
		if (i <= ncopy)
			ft_putchar(ncopy / i % 10 + 48);
		i /= 10;
	}
}