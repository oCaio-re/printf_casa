/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:36:01 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/11/20 11:39:48 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pointer(void *str)
{
	unsigned long	n;
	char			*base;
	int				i;

	n = (unsigned long)str;
	base = "0123456789abcdef";
	i = 0;
	if (!str)
		return (ft_putstr("(nil)"));
	if (n / 16 == 0)
		i += ft_putstr("0x");
	if (n / 16 != 0)
		i += ft_pointer((void *)(n / 16));
	i += ft_putchar(base[n % 16]);
	return (i);
}
