/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:24:37 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/05 11:31:39 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	handle_unsigned(va_list *args)
{
	unsigned int num;

	num = va_arg(*args, unsigned int);
	ft_put_unsigned_fd(num, 1);
	return (count_digits(num));
}