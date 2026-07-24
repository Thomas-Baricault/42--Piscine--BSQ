/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_draw_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:54:18 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 12:20:28 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_map_draw_square(t_map map, t_square square)
{
	int	x;
	int	y;

	y = square.y - 1;
	while (++y < square.y + square.size)
	{
		x = square.x - 1;
		while (++x < square.x + square.size)
			map.data[y][x] = map.c_full;
	}
	return ;
}
