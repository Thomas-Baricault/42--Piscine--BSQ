/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:01:37 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/17 19:24:04 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_next_line(char *str, int *i)
{
	int	begin;
	int	end;

	begin = *i + 1;
	end = begin;
	while (str[end] && str[end] != '\n')
		end++;
	*i = end;
	return (ft_str_dup(str + begin, str + end));
}

void	ft_map_read_settings(t_map *map, char *line)
{
	int	temp;
	int	i;
	int	length;

	length = ft_str_len(line);
	if (length < 4)
		return ;
	map->c_empty = line[length - 3];
	map->c_obstacle = line[length - 2];
	map->c_full = line[length - 1];
	if (map->c_empty == map->c_obstacle || map->c_empty == map->c_full
		|| map->c_obstacle == map->c_full || map->c_empty < 32
		|| map->c_empty > 126 || map->c_obstacle < 32 || map->c_obstacle > 126
		|| map->c_full < 32 || map->c_full > 126)
		return ;
	temp = 0;
	i = 0;
	while (i < length - 3)
	{
		if (!('0' <= line[i] && line[i] <= '9'))
			return ;
		temp = temp * 10 + line[i++] - '0';
	}
	map->height = temp;
	return ;
}

void	ft_map_add_row(t_map *map, char *line)
{
	int	length;

	length = ft_str_len(line);
	if (map->width != 0 && length > 0 && map->width != length)
	{
		ft_str_tab_free(&map->data);
		return ;
	}
	if (length > 0)
		map->width = length;
	while (--length >= 0)
	{
		if (line[length] != map->c_empty && line[length] != map->c_obstacle
			&& line[length] != map->c_full)
		{
			ft_str_tab_free(&map->data);
			return ;
		}
	}
	ft_str_tab_push(&map->data, line);
	return ;
}

void	ft_map_check(t_map *map)
{
	int	error;
	int	y;

	if (map->data == NULL)
		return ;
	error = 0;
	y = -1;
	while (map->data[++y])
		if (y >= map->height && ft_str_len(map->data[y]) != 0 && ++error)
			break ;
	if (error || map->width == 0 || map->height == 0 || y < map->height)
		ft_str_tab_free(&map->data);
	return ;
}

t_map	ft_map_parse(char *content)
{
	t_map	map;
	int		i;
	char	*line;

	map.width = 0;
	map.height = 0;
	map.data = NULL;
	i = -1;
	line = ft_next_line(content, &i);
	ft_map_read_settings(&map, line);
	free(line);
	if (map.height == -1)
		return (map);
	while (content[i])
	{
		line = ft_next_line(content, &i);
		ft_map_add_row(&map, line);
		if (map.data == NULL)
		{
			free(line);
			return (map);
		}
	}
	ft_map_check(&map);
	return (map);
}
