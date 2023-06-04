/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:39:02 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/05 00:27:31 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	count_digits(unsigned long long dec_num)
{
	int	count;

	count = 0;
	while (dec_num != 0)
	{
		count++;
		dec_num = dec_num / 16;
	}
	return (count);
}

char	*dec_to_hex(unsigned long long dec_num)
{
	int		digits;
	char	*hex_num;
	int		i;
	int		temp;

	digits = countDigits(dec_num);
	i = 0;
	hex_num = malloc((digits + 1) * sizeof(char));
	if (hex_num == NULL)
		return (NULL);
	while (dec_num != 0)
	{
		temp = dec_num % 16;
		if (temp < 10)
			temp = temp + '0';
		else
			temp = temp + 55;
		hex_num[i] = (char)temp;
		i++;
		dec_num = dec_num / 16;
	}
	hex_num[i] = '\0';
	return (hex_num);
}
12345 / 16  = 771
771 / 16 = 48
48 / 16 = 3
3 / 16 = 0


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
