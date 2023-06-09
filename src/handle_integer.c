/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:15:25 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/09 01:29:00 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	handle_integer(va_list *args)
{
	int	num;

	num = va_arg(*args, int);
	ft_putnbr_fd(num, 1);
	return (count_digit(num) + (num < 0));
}
