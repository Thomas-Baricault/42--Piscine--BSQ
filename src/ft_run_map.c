/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:58:46 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/17 09:42:38 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_run_map(int fd)
{
	char		*content;
	t_map		map;
	t_square	square;

	content = ft_read_fd(fd);
	if (content == NULL)
	{
		ft_str_print(2, "map error\n");
		return ;
	}
	map = ft_map_parse(content);
	free(content);
	if (map.data == NULL)
	{
		ft_str_print(2, "map error\n");
		return ;
	}
	square = ft_find_square(map);
	ft_map_draw_square(map, square);
	ft_map_print(map);
	ft_str_tab_free(&map.data);
	return ;
}
