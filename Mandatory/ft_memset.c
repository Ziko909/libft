/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:59:30 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:05:52 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	h;
	char			*x;

	i = 0;
	h = (unsigned char) c;
	x = (char *) b;
	while (len-- > 0)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
