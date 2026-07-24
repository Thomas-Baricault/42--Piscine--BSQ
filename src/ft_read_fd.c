/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:14:13 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 18:50:40 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_read_fd(int fd)
{
	char	*buffer;
	char	c;

	buffer = NULL;
	while (read(fd, &c, 1) == 1)
		ft_str_push(&buffer, c);
	return (buffer);
}
