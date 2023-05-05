/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoney <umoney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:48:15 by umoney            #+#    #+#             */
/*   Updated: 2023/05/05 18:38:35 by umoney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *key, ...);

int		arg_printer(char c, va_list macro);

int		ft_putstr(char *c);

int		ft_putpointer(unsigned long int point);

int		ft_puthex(unsigned int point, char *charset);

int		ft_putnbr(int nb);

int		ft_putunsigned(unsigned int nb);

void	ft_bzero(void *str, size_t n);

char	*ft_itoa(int n);

void	*ft_memset(void *b, int c, size_t len);

#endif
