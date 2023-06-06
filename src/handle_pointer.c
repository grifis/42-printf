/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:39:02 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/06 16:37:36 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

size_t	count_hex_digits(unsigned long long dec_num)
{
	size_t	count;

	count = 0;
	if (dec_num == 0)
		return (1);
	while (dec_num != 0)
	{
		count++;
		dec_num = dec_num / 16;
	}
	return (count);
}

size_t	handle_pointer(va_list *args)
{
	void	*ptr;
	size_t	count;
	size_t	digits;
	char	*hex_ptr;

	count = 0;
	ptr = va_arg(*args, void *);
	ft_putstr_fd("0x", 1);
	count += 2;
	digits = count_unsigned_digit((unsigned long long)ptr);
	hex_ptr = dec_to_hex((unsigned long long)ptr, digits);
	count += ft_strlen(hex_ptr);
	ft_putstr_fd(hex_ptr, 1);
	if (hex_ptr)
		free(hex_ptr);
	return (count);
}
