/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:27:01 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:05:04 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	a;

	i = 0;
	a = (unsigned char ) c;
	b = (unsigned char *) s;
	while (n > i)
	{
		if (b[i] == a)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
