/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:53:19 by zaabou            #+#    #+#             */
/*   Updated: 2022/05/16 00:10:07 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Include/libft.h"

static	int	checkset(char const *s1, char const *set)
{
	int	l;
	int	h;

	l = 0;
	h = 0;
	while (s1[l])
	{
		if (s1[l] == set[h])
			l++;
		while (s1[l] != set[h] && set[h] != '\0')
			h++;
		if (s1[l] != set[h])
			return (l);
		h = 0;
		l++;
	}
	return (l);
}

static	int	checkrvset(char const *string, char const *trimmer, int l)
{
	int	h;

	h = 0;
	while (l >= 0)
	{
		if (string[l] == trimmer[h])
			l--;
		while (string[l] != trimmer[h] && trimmer[h] != '\0')
			h++;
		if (string[l] != trimmer[h])
			return (l + 1);
		h = 0;
		l--;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		b;
	int		f;
	int		i;
	char	*d;

	if (!s1 || !set)
		return (NULL);
	b = checkset(s1, set);
	f = checkrvset(s1, set, ft_strlen(s1));
	i = 0;
	if (f - b <= 0)
		return (ft_strdup(""));
	else
	{
		d = (char *) malloc(f - b + 1);
		if (!d)
			return (NULL);
		while (f > b && s1[i] != '\0')
			d[i++] = s1[b++];
		d[i] = '\0';
		return (d);
	}
}
