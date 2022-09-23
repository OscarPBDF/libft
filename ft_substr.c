/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:00:39 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/23 18:15:04 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	int				i;
	unsigned int	lensub;
	unsigned int	lenstr;

	if (!s)
		return (0);
	lenstr = ft_strlen((char *)s);
	if (start > lenstr)
	{
		sub = malloc(1);
		if (!sub)
			return (0);
		*sub = 0;
		return (sub);
	}
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	lensub = start + len;
	i = 0;
	while (start < lensub)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
/*
int	main()
{
	char	str[] = "01234";
	char	*sub;
	int		pos;
	int		len;
	
	pos = 10;
	len = 10;
	sub = ft_substr(str, pos, len);
	printf("%s\n", sub);
}*/