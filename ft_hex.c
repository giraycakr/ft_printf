/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:10:27 by gcakirog          #+#    #+#             */
/*   Updated: 2023/12/31 17:10:30 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexlen(unsigned long hex)
{
	int	i;

	i = 0;
	while (hex > 0)
	{
		hex /= 16;
		i++;
	}
	return (i);
}

int	ft_putptr(unsigned long hex, char *base)
{
	int		i;
	int		ret;
	char	*on6;

	ret = ft_putstr("0x");
	if (hex == 0)
		return (ret + ft_putchar('0'));
	i = hexlen(hex);
	on6 = malloc(i + 1);
	on6[i--] = 0;
	while (hex > 0)
	{
		on6[i--] = base[hex % 16];
		hex /= 16;
	}
	i = 0;
	while (on6[i])
		ret += ft_putchar(on6[i++]);
	free(on6);
	return (ret);
}

int	ft_puthex(unsigned int hex, char *base)
{
	int		i;
	int		ret;
	char	*on6;

	if (hex == 0)
		return (ft_putchar('0'));
	i = hexlen(hex);
	on6 = malloc(i + 1);
	on6[i--] = 0;
	while (hex > 0)
	{
		on6[i--] = base[hex % 16];
		hex /= 16;
	}
	ret = 0;
	i = 0;
	while (on6[i])
		ret += ft_putchar(on6[i++]);
	free(on6);
	return (ret);
}
