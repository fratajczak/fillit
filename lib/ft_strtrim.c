/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 01:32:55 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/06 01:48:41 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	int len;
	char *str;

	if (!s)
		return (NULL);
	while(*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == 0)
		return (ft_strnew(0));
	len = ft_strlen(s);
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	len++;
	if (!(str = ft_strnew(len)))
		return (NULL);
	return (ft_strncpy(str, s, len));
}