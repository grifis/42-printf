/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:15:25 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/06 00:46:23 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	handle_integer(va_list *args)
{
	int	num;

	num = va_arg(*args, int);
	ft_putnbr_fd(num, 1);
	return (count_digit(num));
}
