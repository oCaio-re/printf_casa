/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <ocaio-re@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:38:43 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/11/20 11:38:45 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_convert(const char *str, va_list info);
int	ft_putchar(unsigned int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_unsint(unsigned int nb);
int	ft_putbase(char *base, unsigned int n);
int	ft_strlen(const char *str);
int	ft_pointer(void *str);

#endif
