/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:02:07 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:10:49 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		ss = (char *) malloc(((ft_strlen(s) - start) + 1));
	else
		ss = (char *) malloc((len + 1));
	if (!ss)
		return (NULL);
	while (s[i] && i < start)
		i++;
	while (s[i] && len)
	{
		ss[j++] = s[i++];
		len--;
	}
	ss[j] = '\0';
	return (ss);
}
