/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:07:30 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/15 11:35:39 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_char;

	if (s == NULL)
		return (NULL);
	ptr_char = (unsigned char *) s;
	while (n != 0)
	{
		*ptr_char = (unsigned char) c;
		ptr_char ++;
		n --;
	}
	return (s);
}