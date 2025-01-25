/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raosmona <raosmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:02:48 by raosmona          #+#    #+#             */
/*   Updated: 2024/12/22 18:32:26 by raosmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	for_hex(int ch, va_list ap);
int	ft_printf(const char *instructions, ...);
int	for_ptr(va_list ap);
int	for_string(va_list ap);
int	for_digit(long nb, int base);
int	for_digit_upcase(long nb, int base);
int	for_char(int c);

#endif