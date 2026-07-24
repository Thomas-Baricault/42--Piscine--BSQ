/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:53:34 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/17 09:42:21 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_map
{
	int		width;
	int		height;
	char	**data;
	char	c_empty;
	char	c_obstacle;
	char	c_full;
}	t_map;

typedef struct s_square
{
	int	x;
	int	y;
	int	size;
}	t_square;

t_square	ft_find_square(t_map map);

void		ft_map_draw_square(t_map map, t_square square);
t_map		ft_map_parse(char *content);
void		ft_map_print(t_map map);

char		*ft_read_fd(int fd);

void		ft_run_file(char *path);
void		ft_run_files(char **files);
void		ft_run_map(int fd);

char		*ft_str_dup(char *begin, char *end);
int			ft_str_len(char *str);
void		ft_str_print(int output, char *str);
char		*ft_str_push(char **str, char c);

void		ft_str_tab_free(char ***tab);
char		**ft_str_tab_push(char ***tab, char *str);

#endif
