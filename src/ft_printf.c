/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:40:47 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/06 00:43:14 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

size_t	check(const char str, va_list *args)
{
	if (str == 'c')
		return (handle_char(args));
	else if (str == 's')
		return (handle_string(args));
	else if (str == 'p')
		return (handle_pointer(args));
	else if (str == 'd' || str == 'i')
		return (handle_integer(args));
	else if (str == 'u')
		return (handle_unsigned(args));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += check(str[i], &args);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
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
	ft_printf("pointer: %p\n", "pointer");
	ft_printf("integer(d): %d\n", 2147483647);
	ft_printf("integer(i): %i\n", -2147483648);
	ft_printf("unsigned: %u\n", 4294967295);
	printf("hex: %x\n", 100);
	return (0);
}
