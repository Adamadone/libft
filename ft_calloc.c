/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamzacios <adamzacios@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:41:57 by adamzacios        #+#    #+#             */
/*   Updated: 2023/03/09 09:42:46 by adamzacios       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if ((nmemb * size) < nmemb || (nmemb * size) < size)
		return (NULL);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}
