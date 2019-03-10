/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 03:35:42 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/06 03:36:09 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int ncopy;
	unsigned int i;

	i = 1000000000;
	ncopy = ABS(n);
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (ncopy != 0)
	{
		if (i <= ncopy)
			ft_putchar_fd(ncopy / i % 10 + 48, fd);
		i /= 10;
	}
}