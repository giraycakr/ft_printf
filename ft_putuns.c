/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:40:17 by gcakirog          #+#    #+#             */
/*   Updated: 2023/12/31 17:41:25 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns(unsigned int a, int *i)
{
	long	b;

	b = (long)a;
	if (b < 10)
	{
		*i += ft_putchar(b + '0');
	}
	else
	{
		ft_putuns(b / 10, i);
		ft_putuns(b % 10, i);
	}
}
