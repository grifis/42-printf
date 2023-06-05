/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:24:37 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/06 00:46:34 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	handle_unsigned(va_list *args)
{
	unsigned int	num;

	num = va_arg(*args, unsigned int);
	ft_put_unsigned_fd(num, 1);
	return (count_digit(num));
}
