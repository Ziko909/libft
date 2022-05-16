/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:56:43 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:09:57 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;
	unsigned char	l;

	i = 0;
	j = 0;
	l = (unsigned char) c;
	while (s[i] != '\0')
		i++;
	while (i >= j)
	{
		if (s[i] == l)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
