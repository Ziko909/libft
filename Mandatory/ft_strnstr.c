/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:08:52 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:09:39 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		x;
	int			y;

	y = 0;
	i = 0;
	if (needle[y] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && len > i)
	{	
		x = i;
		while (haystack[x] == needle[y] && len > x)
		{
			x++;
			y++;
			if (needle[y] == '\0')
				return ((char *)&haystack[i]);
		}
		y = 0;
		i++;
	}
	return (NULL);
}
