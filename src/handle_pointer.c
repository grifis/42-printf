/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:39:02 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/04 23:29:47 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

unsigned long long	dec_to_hex(unsigned long long n)
{
	unsigned long long	remainder;
	unsigned long long	hex;

	hex = 0;
	remainder = 0;
	while (n != 0)
	{
		remainder = n % 16;
		n /= 16;
		hex = hex * 10 + remainder;
	}
	return (hex);
}

size_t	hanlde_pointer(va_list *arg)
{
	void	*ptr;
	size_t	count;

	count = 0;
	ptr = va_arg(*arg, void *);
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef");
	return (count);
}
