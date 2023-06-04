/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:32:30 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/06/04 17:35:53 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	handle_string(va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
