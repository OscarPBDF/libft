/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <operez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:46:27 by operez-d          #+#    #+#             */
/*   Updated: 2022/10/01 14:52:14 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (1);
	return (0);
}
