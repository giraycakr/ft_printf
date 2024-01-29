/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:06:24 by gcakirog          #+#    #+#             */
/*   Updated: 2023/12/31 17:37:13 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define INT_MAX 2147483647

int	ft_putchar(int a)
{
	write(1, &a, 1);
	return (1);
}

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	ft_putstr(char *a)
{
	if (a == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, a, ft_strlen(a));
	return (ft_strlen(a));
}

void	*ft_putnbr(int num, int *i)
{
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		*i = 11;
		return (0);
	}
	if (num < 0)
	{
		write (1, "-", 1);
		*i = *i + 1;
		num *= -1;
	}
	if (num <= 9)
		*i = *i + ft_putchar(num + '0');
	if (num > 9)
	{
		ft_putnbr(num / 10, i);
		ft_putnbr(num % 10, i);
	}
	return (0);
}
