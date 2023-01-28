/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azacios <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:49:08 by azacios           #+#    #+#             */
/*   Updated: 2023/01/17 15:49:09 by azacios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
	#define LIBFT_H
#include <unistd.h>
#include <stdio.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi(const char *nptr);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);



#endif