/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:36:47 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/11/20 11:36:50 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putbase(char *base, unsigned int n)
{
	int		i;

	i = 0;
	if (n / ft_strlen(base) != 0)
		i += ft_putbase(base, (n / ft_strlen(base)));
	i += ft_putchar(base[n % ft_strlen(base)]);
	return (i);
}
