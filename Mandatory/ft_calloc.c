/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:30:02 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/15 23:59:52 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*y;

	y = (char *) malloc(count * size);
	if (y == NULL)
		return (NULL);
	ft_bzero(y, count * size);
	return ((void *) y);
}
