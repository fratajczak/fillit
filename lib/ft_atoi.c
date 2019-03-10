/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 23:36:55 by ferdinand         #+#    #+#             */
/*   Updated: 2019/03/05 23:34:43 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int toi;

	i = 0;
	sign = 1;
	toi = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' ||
			  str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = 44 - str[i];
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == 1 && toi > 214748364 + (48 - str[i]) / 10)
			return (-1);
		if (sign == -1 && -toi < -214748364 + (str[i] - 48) / 10)
			return (0);
		toi = toi * 10 + str[i] - 48;
		i++;
	}
	return (toi * sign);
}