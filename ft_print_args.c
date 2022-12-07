/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:06:46 by asirvent          #+#    #+#             */
/*   Updated: 2022/12/06 18:11:19 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(va_list args, char str)
{
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (ft_strchr("diuxX", str))
		return (ft_putnbr(va_arg(args, int), str));
	else if (str == '%')
		return (ft_putchar('%'));
	return (-1);
}
