/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:45:28 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:08:49 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ls;

	ls = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (ls);
	while (src[i] != '\0' && dstsize - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ls);
}
