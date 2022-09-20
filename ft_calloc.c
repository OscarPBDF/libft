/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:32:38 by operez-d          #+#    #+#             */
/*   Updated: 2022/09/20 14:50:07 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	int		*i;
	size_t	n;
	
	n = count * size;
	i = malloc(n);
	ft_bzero(i, n);
	return (i);
}

int main() 
{
	int *p;
	int	*q;
	int i;
	int	j;

	p = ft_calloc(10, sizeof *p);
	q = calloc(10, sizeof *q);
	i = 0;
	j = 0;
	
	while (i <= 10)
	{
		printf("%01X", p[i]);
        if (i % 8 == 7) {
            printf("\n");
        }
		i++;
	}
	printf("\n-----------\n");
	while (j <= 10)
	{
		printf("%01X", q[i]);
        if (j % 8 == 7) {
            printf("\n");
        }
		j++;
	}
	free(p);
	free(q);
}