/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:34:04 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:07:32 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		x;
	char	*y;

	i = 0;
	x = 0;
	while (s1[i] != '\0')
		i++;
	y = (char *) malloc(i * sizeof(char) + 1);
	if (!y)
		return (NULL);
	while (s1[x])
	{
		y[x] = s1[x];
		x++;
	}
	y[x] = '\0';
	return (y);
}
