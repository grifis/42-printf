/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:40:47 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/01 16:14:02 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list args;
	size_t i;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);

	return (0);
}

int main(void)
{
    ft_printf("Hello, world!\n");
    return (0);
}