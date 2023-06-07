/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:40:47 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/07 16:50:59 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

size_t	check(const char format, va_list *args)
{
	if (format == 'c')
		return (handle_char(args));
	else if (format == 's')
		return (handle_string(args));
	else if (format == 'p')
		return (handle_pointer(args));
	else if (format == 'd' || format == 'i')
		return (handle_integer(args));
	else if (format == 'u')
		return (handle_unsigned(args));
	else if (format == 'x')
		return (handle_hex(args, format));
	else if (format == 'X')
		return (handle_hex(args, format));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += check(format[i], &args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	ft_printf("char: %c\n", 'c');
	ft_printf("string: %s\n", "string");
	ft_printf("%s\n", "----------------------------------");
	ft_printf("ft pointer: %p\n", "pointer");
	printf("pointer: %p\n", "pointer");
	ft_printf("ft pointer: %p\n", NULL);
	printf("pointer: %p\n", NULL);
	ft_printf("%s\n", "----------------------------------");
	ft_printf("integer(d): %d\n", 2147483647);
	ft_printf("integer(i): %i\n", -2147483648);
	ft_printf("unsigned: %u\n", 4294967295);
	ft_printf("%s\n", "----------------------------------");
	ft_printf("ft hex: %x\n", -100);
	printf("hex: %x\n", -100);
	ft_printf("ft hex: %x\n", 1000);
	printf("hex: %x\n", 1000);
	ft_printf("%s\n", "----------------------------------");
	ft_printf("ft Upper hex: %X\n", -100);
	printf("Upper hex: %X\n", -100);
	ft_printf("ft Upper hex: %X\n", 1000);
	printf("Upper hex: %X\n", 1000);
	return (0);
}
