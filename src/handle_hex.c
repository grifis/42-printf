/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:26:56 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/09 10:38:01 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

size_t	handle_hex(va_list *args, char format)
{
	int		num;
	char	*hex;
	size_t	hex_len;

	num = va_arg(*args, int);
	hex = dec_to_hex(num, count_hex_digit((unsigned int)num));
	hex_len = ft_strlen(hex);
	if (format == 'x')
		ft_putstr_fd(hex, 1);
	else
		ft_putstr_fd(ft_str_toupper(hex), 1);
	if (hex)
		free(hex);
	return (hex_len);
}
