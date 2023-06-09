/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_unsigned_digit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:46:51 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/08 19:16:45 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_unsigned_digit(unsigned long long num)
{
	int	count;

	if (num == 0)
		return (1);
	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}
