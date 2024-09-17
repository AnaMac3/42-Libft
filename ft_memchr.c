/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:12:45 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/16 16:30:15 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_s;
	unsigned char	char_c;

	char_s = (unsigned char *) s;
	char_c = (unsigned char) c;
	while (*char_s && n != 0)
	{
		if (*char_s == char_c)
			return (char_s);
		char_s ++;
		n --;
	}
	return (NULL);
}
