/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fratajcz <fratajcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 22:58:25 by fratajcz          #+#    #+#             */
/*   Updated: 2019/03/10 19:14:11 by fratajcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

#ifndef UTILS_H
#define UTILS_H

/*BIT = 0b1000000000000000000000000000000000000000000000000000000000000000*/
#define BIT 9223372036854775808ULL
#define VAL(nb, bit_pos) ((nb & (BIT >> bit_pos)) != 0)

void set_bit(u_int64_t *nb, int pos);
void	print_sol(t_tetris *pieces, int size);
int     get_next_offset(char *buf);
int     get_offset(char **buf);

#endif