/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:54:23 by asirvent          #+#    #+#             */
/*   Updated: 2022/12/07 15:23:41 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		r;
	int		count;
	va_list	args;

	i = 0;
	r = 0;
	count = 0;
	va_start (args, str);
	while (count != -1 && str[i])
	{
		if (str[i] != '%')
			count = ft_putchar(str[i]);
		else
			count = ft_print_args(args, str[++i]);
		r += count;
		i++;
	}
	va_end (args);
	if (count == -1)
		return (-1);
	return (r);
}
