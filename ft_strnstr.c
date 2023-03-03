/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azacios <azacios@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:56:08 by azacios           #+#    #+#             */
/*   Updated: 2023/03/03 16:27:40 by azacios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (x < len && big[x] != '\0')
	{
		while (big[x + y] == little[y] && x + y < len)
		{
			if (little[y + 1] == '\0')
			{
				return ((char *)&big[x]);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
