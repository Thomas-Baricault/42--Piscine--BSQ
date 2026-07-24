/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:15:32 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 14:57:25 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_str_push(char **str, char c)
{
	int		length;
	char	*temp;

	length = ft_str_len(*str);
	temp = malloc(sizeof(char) * (length + 2));
	if (temp)
	{
		temp[length] = c;
		temp[length + 1] = '\0';
		while (*str && --length >= 0)
			temp[length] = (*str)[length];
	}
	free(*str);
	*str = temp;
	return (temp);
}
