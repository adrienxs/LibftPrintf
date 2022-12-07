/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:27:06 by asirvent          #+#    #+#             */
/*   Updated: 2022/07/12 14:33:43 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	neg;
	int	r;

	neg = 1;
	r = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\v'
		|| *s == '\f' || *s == '\r')
		s++;
	if (*s == '-')
		neg = -neg;
	if (*s == '+' || *s == '-')
		s++;
	while (ft_isdigit(*s))
		r = r * 10 + (*s++ - '0');
	return (r * neg);
}