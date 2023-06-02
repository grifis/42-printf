/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:40:47 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/02 20:03:01 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

void	check(const char *str, size_t *i, va_list args)
{
	(*i)++;
	if (str[*i] == 'c')
		handle_char(i, args);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			check(str, &i, args);
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	char c1;
	char c2;
	
	c1 = 'd';
	c2 = 'z';
	ft_printf("b%cb%cb%c", c1, c2, 'z');
	return (0);
}