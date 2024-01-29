/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:38:08 by gcakirog          #+#    #+#             */
/*   Updated: 2023/12/31 20:57:22 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(int a);
int		ft_strlen(char *a);
int		ft_putstr(char *a);
void	*ft_putnbr(int num, int *i);
void	ft_putuns(unsigned int a, int *i);
void	ft_pointer(unsigned long a, int *i);
int		ft_puthex(unsigned int hex, char *base);
#endif