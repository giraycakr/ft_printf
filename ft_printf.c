/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:11:05 by gcakirog          #+#    #+#             */
/*   Updated: 2023/12/31 17:18:57 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	control(va_list *ag, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(*ag, int));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*ag, int), &i);
	else if (c == 's')
		i += ft_putstr(va_arg(*ag, char *));
	else if (c == 'u')
		ft_putuns(va_arg(*ag, unsigned int), &i);
	else if (c == 'x')
		i += ft_puthex(va_arg(*ag, int), "0123456789abcdef");
	else if (c == 'X')
		i += ft_puthex(va_arg(*ag, int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		i += write (1, "0x", 2);
		ft_pointer(va_arg(*ag, unsigned long), &i);
	}
	else if (c == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int			length;
	va_list		ag;
	int			i;

	va_start (ag, format);
	i = 0;
	length = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			length += control(&ag, format[i++]);
		}
		else
		{
			length += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(ag);
	return (length);
}
