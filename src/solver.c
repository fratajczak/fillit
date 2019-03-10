/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 21:52:52 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/10 18:06:28 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include "utils.h"
#include <sys/types.h>


#include "stdio.h"

int		check_piece(u_int16_t *square, t_tetris piece)
{
	piece.value.t64 >>= piece.x;
	square += piece.y;
	return (((square[0] & (piece.value.t16.p0)) +
		 (square[1] & piece.value.t16.p1) +
		 (square[2] & piece.value.t16.p2) +
		 (square[3] & piece.value.t16.p3)) == 0);
}

void	toggle_piece(u_int16_t *square, t_tetris piece)
{
	piece.value.t64 >>= piece.x;
	square += piece.y;
	square[0] ^= piece.value.t16.p0;
	square[1] ^= piece.value.t16.p1;
	square[2] ^= piece.value.t16.p2;
	square[3] ^= piece.value.t16.p3;
}

int		solve_size(u_int16_t *square, t_tetris *pieces, int size)
{
	if (pieces->value.t64 == 0)
		return (1);
	while(pieces->y <= size - pieces->height)
	{
		while(pieces->x <= size - pieces->width)
		{
			if (check_piece(square, *pieces))
			{
				toggle_piece(square, *pieces);
				if (solve_size(square, pieces + 1, size))
					return (1);
				toggle_piece(square, *pieces);
			}
			pieces->x++;
		}
		pieces->y++;
		pieces->x = 0;
	}
	pieces->x = 0;
	pieces->y = 0;
	return (0);
}

void	solve(t_tetris *pieces, int nb_pieces)
{
	u_int16_t square[16];
	int       size;

	size = 0;
	ft_bzero(square, 16 * sizeof(u_int16_t));
	while(size * size < 4 * nb_pieces)
		size++;
	while (!solve_size(square, pieces, size) && size <= 16)
	{
		size++;
		ft_bzero(square, 16 * sizeof(u_int16_t));
	}
	if (size != 17)
		print_sol(pieces, size);
	else
		ft_putendl("error");
}