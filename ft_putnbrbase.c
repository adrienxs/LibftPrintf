/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:52:14 by asirvent          #+#    #+#             */
/*   Updated: 2022/12/06 17:52:27 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(unsigned long n, char str)
{
	int				len;
	unsigned int	base;
	char			*base_set;

	base_set = ft_nbrbase(str);
	base = ft_strlen(base_set);
	if (n < base)
		return (ft_putchar(base_set[n]));
	else
		len = ft_putnbrbase(n / base, str);
	if (len == -1)
		return (-1);
	len += ft_putnbrbase(n % base, str);
	return (len);
}
