/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferdinand <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 23:41:25 by ferdinand         #+#    #+#             */
/*   Updated: 2019/03/04 23:41:26 by ferdinand        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *dup;

	if (!(dup = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	return (ft_strcpy(dup, s));
}
