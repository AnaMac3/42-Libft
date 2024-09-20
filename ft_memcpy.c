/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:44:36 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/19 11:35:22 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dst;
	const unsigned char	*char_src;

	if (src == NULL || dest == NULL)
		return (NULL);
	char_dst = (unsigned char *) dest;
	char_src = (const unsigned char *) src;
	while (n != 0)
	{
		*char_dst = *char_src;
		char_dst ++;
		char_src ++;
		n --;
	}
	return (dest);
}
