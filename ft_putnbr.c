/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 09:19:11 by hbakrim           #+#    #+#             */
/*   Updated: 2023/12/04 12:09:12 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, size_t *count)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, count);
	ft_putchar(nb % 10 + 48, count);
}
