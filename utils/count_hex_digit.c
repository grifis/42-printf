/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_hex_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:46:51 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/09 01:32:12 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_hex_digit(unsigned long long num)
{
	int	count;

	if (num == 0)
		return (1);
	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}
