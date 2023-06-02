/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:27:14 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/02 19:49:00 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

void	handle_char(size_t *i, va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("\nc: %c\n", c);
	ft_putchar_fd(c, 1);
	(*i)++;
}