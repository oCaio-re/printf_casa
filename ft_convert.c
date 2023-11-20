/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:34:48 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/11/20 11:34:52 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_convert(const char *str, va_list info)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (str[i] == 'c')
		ret += ft_putchar(va_arg(info, int));
	if (str[i] == 's')
		ret += ft_putstr(va_arg(info, char *));
	if (str[i] == 'i' || str[i] == 'd')
		ret += ft_putnbr(va_arg(info, int));
	if (str[i] == 'u')
		ret += ft_unsint(va_arg(info, unsigned int));
	if (str[i] == '%')
		ret += write (1, "%%", 1);
	if (str[i] == 'p')
		ret += ft_pointer(va_arg(info, void *));
	if (str[i] == 'x')
		ret += ft_putbase("0123456789abcdef", va_arg(info, unsigned int));
	if (str[i] == 'X')
		ret += ft_putbase("0123456789ABCDEF", va_arg(info, unsigned int));
	return (ret);
}
