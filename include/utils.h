/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 22:58:25 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/11 17:50:52 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILS_H
#define UTILS_H
#include "fillit.h"
#include <sys/types.h>

/*BIT = 0b1000000000000000000000000000000000000000000000000000000000000000*/
#define BIT 9223372036854775808ULL
#define MIN(a, b) a < b ? a : b
#define VAL(nb, bit_pos) ((nb & (BIT >> bit_pos)) != 0)

void set_bit(u_int64_t *nb, int pos);
void	print_sol(t_tetris *pieces, int size);
int     get_next_offset(char *buf);
int     get_offset(char **buf);
void    reverse_pieces_bytes(t_tetris *pieces);

#endif