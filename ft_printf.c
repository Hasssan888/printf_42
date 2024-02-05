/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:40:12 by hbakrim           #+#    #+#             */
/*   Updated: 2023/12/04 14:20:20 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(va_list ptr, char *s, size_t *count)
{
	if (*s == 'c')
		ft_putchar(va_arg(ptr, int), count);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(ptr, int), count);
	else if (*s == 's')
		ft_putstr(va_arg(ptr, char *), count);
	else if (*s == 'p')
		ft_adrees(ptr, count);
	else if (*s == 'u')
		ft_putuns(va_arg(ptr, unsigned int), count);
	else if (*s == 'x')
		ft_puthex(va_arg(ptr, unsigned int), count, "0123456789abcdef");
	else if (*s == 'X')
		ft_puthex(va_arg(ptr, unsigned int), count, "0123456789ABCDEF");
	else if (*s == '%')
		ft_putchar('%', count);
	else
		ft_putchar(*s, count);
}

int	ft_printf(const char *s, ...)
{
	size_t	count;
	int		i;
	va_list	ptr;

	va_start(ptr, s);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '\0')
				break ;
			ft_print_s(ptr, (char *)s + i, &count);
		}
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(ptr);
	return ((int)count);
}
