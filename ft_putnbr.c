/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:25:26 by asirvent          #+#    #+#             */
/*   Updated: 2022/12/04 17:25:28 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, char str)
{
	int	len;

	len = 0;
	if (ft_strchr("di", str) && (n < 0))
	{
		len = ft_putchar('-');
		n *= -1;
	}
	if (len == -1)
		return (-1);
	len += ft_putnbrbase((unsigned int)n, str);
	return (len);
}
