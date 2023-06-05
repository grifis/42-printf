/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:39:02 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/05 11:40:09 by abe21453@cs      ###   ########.fr       */
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

char	*dec_to_hex(unsigned long long dec_num, size_t digits)
{
	char	*hex_num;
	int		temp;

	hex_num = malloc((digits + 1) * sizeof(char));
	if (hex_num == NULL)
		return (NULL);
	hex_num[digits] = '\0';
	while (digits--)
	{
		temp = dec_num % 16;
		if (temp < 10)
			temp = temp + '0';
		else
			temp = temp + 55;
		hex_num[digits] = (char)temp;
		dec_num = dec_num / 16;
	}
	return (hex_num);
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
	free(hex_ptr);
	return (count);
}
