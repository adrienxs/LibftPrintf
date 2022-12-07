/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:25:42 by asirvent          #+#    #+#             */
/*   Updated: 2022/12/04 17:25:44 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	len;

	len = ft_putstr("0x");
	if (len == -1)
		return (-1);
	len += ft_putnbrbase((unsigned long)p, 'p');
	return (len);
}
