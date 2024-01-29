/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:39:34 by gcakirog          #+#    #+#             */
/*   Updated: 2023/12/31 17:40:06 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(unsigned long a, int *i)
{
	char	*b;

	b = "0123456789abcdef";
	if (a >= 16)
	{
		ft_pointer(a / 16, i);
		ft_pointer(a % 16, i);
	}
	if (a < 16)
	{
		*i += ft_putchar(b[a]);
	}
}
