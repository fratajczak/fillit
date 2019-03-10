/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 00:32:10 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/10 12:24:32 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
#define FILLIT_H
#include <sys/types.h>

union U64{
	u_int64_t t64;
	struct T16
	{
		u_int16_t p3;
		u_int16_t p2;
		u_int16_t p1;
		u_int16_t p0;
	}
	t16;
};

typedef struct s_tetris
{
	int      x;
	int      y;
	int      width;
	int      height;
	union U64		value;
} t_tetris;


#endif