/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:45:48 by asirvent          #+#    #+#             */
/*   Updated: 2022/12/04 19:45:54 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_print_args(va_list args, char str);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(long n, char str);
char	*ft_nbrbase(char str);
int		ft_putnbrbase(unsigned long n, char str);
int		ft_putptr(void *p);
int		ft_printf(const char *str, ...);

#endif
