/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:51:25 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/06 00:53:44 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
