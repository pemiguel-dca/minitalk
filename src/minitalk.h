/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:56:41 by pemiguel          #+#    #+#             */
/*   Updated: 2022/12/29 18:21:35 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define DEC_BASE "0123456789"

# include <sys/types.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <signal.h>

//Utils
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_strchr(const char *str, int c);
int		ft_recursive_power(int nb, int power);
int		ft_atoi(const char *str);

//Client
void	send_binary_char(char c, int pid);
int		confirm_params(int n_params, char **argv);

//Server
char	runs_bits(int bit, char c, int signal);
#endif
