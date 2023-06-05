/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:01:19 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/06/06 00:51:42 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);
size_t	handle_char(va_list *args);
size_t	handle_string(va_list *args);
size_t	handle_pointer(va_list *args);
size_t	handle_integer(va_list *args);
int		count_digit(int num);
size_t	handle_unsigned(va_list *args);
void	ft_put_unsigned_fd(unsigned int n, int fd);
char	*dec_to_hex(unsigned long long dec_num, size_t digits);

#endif
