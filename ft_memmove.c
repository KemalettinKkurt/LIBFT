/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 03:48:47 by kkocakur          #+#    #+#             */
/*   Updated: 2025/07/02 21:44:31 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*new_dest;
	const unsigned char	*new_src;

	if (!dest && !src)
		return (NULL);
	new_dest = (unsigned char *)dest;
	new_src = (const unsigned char *)src;
	if (new_dest < new_src)
	{
		i = -1;
		while (++i < n)
			new_dest[i] = new_src[i];
	}
	else
	{
		i = n;
		while (i-- > 0)
			new_dest[i] = new_src[i];
	}
	return (dest);
}
