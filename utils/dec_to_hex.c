/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:51:25 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/09 01:31:40 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
			temp = temp + 87;
		hex_num[digits] = (char)temp;
		dec_num = dec_num / 16;
	}
	return (hex_num);
}
