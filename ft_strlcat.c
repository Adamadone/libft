/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azacios <azacios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:30:20 by azacios           #+#    #+#             */
/*   Updated: 2023/03/03 16:33:53 by azacios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dst_len + src_len;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (i < size - dst_len - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (i < size)
		dst[dst_len + i] = '\0';
	return (len);
}
