/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adrees.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:39:23 by hbakrim           #+#    #+#             */
/*   Updated: 2023/12/03 14:46:21 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_adrees(va_list ptr, size_t *count)
{
	void	*p;

	p = va_arg(ptr, void *);
	ft_putstr("0x", count);
	ft_puthex((unsigned long)p, count, "0123456789abcdef");
}
