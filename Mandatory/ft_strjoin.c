/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:30:29 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:08:20 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lns;
	char	*nws;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	lns = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	nws = (char *) malloc(lns + 1);
	if (!nws)
		return (NULL);
	while (s1[j])
		nws[i++] = s1[j++];
	j = 0;
	while (s2[j])
		nws[i++] = s2[j++];
	nws[i] = '\0';
	return (nws);
}
