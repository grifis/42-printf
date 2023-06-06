/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:26:56 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/06 19:30:46 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

size_t	handle_hex(va_list *args)
{
	int num;
	char *hex;

	num = va_arg(*args, int);
	hex = dec_to_hex(num, count_unsigned_digit((unsigned int)num));
	printf("count_unsigned_digit: %d\n", count_unsigned_digit((unsigned int)num));
	printf("unsigned_num: %u\n", (unsigned int)num);
	ft_putstr_fd(hex, 1);
	return (ft_strlen(hex));
}