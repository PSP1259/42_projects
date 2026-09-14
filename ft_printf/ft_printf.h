/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pspuhler <pspuhler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:42:37 by pspuhler          #+#    #+#             */
/*   Updated: 2026/09/14 13:46:35 by pspuhler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int ft_print_char(va_list args);
int	ft_print_str(va_list args);
int	ft_print_ptr(va_list args);
int	ft_print_putnbr(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_hex_lowercase(va_list args);
int	ft_print_hex_uppercase(va_list args);
int	ft_print_percent(void);

#endif
