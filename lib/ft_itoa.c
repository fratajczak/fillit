/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 02:58:05 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/06 03:16:09 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char *str;
	int   i;
	unsigned int ncopy;

	if (!(str = ft_strnew(10)))
		return (NULL);
	ncopy = ABS(n);
	i = 0;
	if (ncopy == 0)
		str[i++] = '0';
	while (ncopy != 0)
	{
		str[i] = ncopy % 10 + 48;
		ncopy /= 10;
		i++;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}