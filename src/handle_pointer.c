/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:39:02 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/06 00:52:07 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	count_hex_digits(unsigned long long dec_num)
{
	size_t	count;

	count = 0;
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
	digits = count_hex_digits((unsigned long long)ptr);
	count += digits;
	hex_ptr = dec_to_hex((unsigned long long)ptr, digits);
	ft_putstr_fd(hex_ptr, 1);
	if (hex_ptr)
		free(hex_ptr);
	return (count);
}
