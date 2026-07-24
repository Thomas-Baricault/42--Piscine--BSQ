/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:42:34 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/16 15:44:46 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_str_dup(char *begin, char *end)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (end - begin + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (begin + (++i) != end)
		str[i] = begin[i];
	str[i] = '\0';
	return (str);
}
