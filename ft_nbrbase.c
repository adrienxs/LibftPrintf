/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:19:57 by asirvent          #+#    #+#             */
/*   Updated: 2022/12/06 18:20:05 by asirvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_nbrbase(char str)
{
	char	*base_set;

	base_set = "0123456789";
	if (ft_strchr("px", str))
		base_set = "0123456789abcdef";
	else if (str == 'X')
		base_set = "0123456789ABCDEF";
	return (base_set);
}
