/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 09:36:08 by hbakrim           #+#    #+#             */
/*   Updated: 2023/12/04 14:24:24 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(int c, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_putnbr(int nb, size_t *count);
void	ft_putuns(unsigned int nb, size_t *count);
void	ft_puthex(unsigned long nb, size_t *count, char *base);
void	ft_print_s(va_list ptr, char *s, size_t *count);
void	ft_adrees(va_list ptr, size_t *count);
#endif
