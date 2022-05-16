/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:17:29 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:08:33 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ls;
	size_t	ld;

	i = 0;
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (dstsize < ld)
		return (ls + dstsize);
	if (dstsize > ld)
	{
		while (ld + i < dstsize - 1 && src[i])
		{
			dst[ld + i] = src[i];
			i++;
		}
	}
	dst[ld + i] = '\0';
	return (ld + ls);
}
