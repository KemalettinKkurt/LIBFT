/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 03:03:35 by kkocakur          #+#    #+#             */
/*   Updated: 2025/07/01 20:30:07 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				index;
	const unsigned char	*bytes;

	bytes = (const unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (bytes[index] == (unsigned char)c)
			return ((void *)(bytes + index));
		index++;
	}
	return (NULL);
}
