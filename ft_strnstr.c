/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:38:50 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/18 11:36:18 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*start_big;
	const char	*start_little;

	if (little == NULL || big == NULL)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len > 0)
	{
		start_big = big;
		start_little = little;
		while (*little && (len > 0) && (*big == *little))
		{
			big ++;
			little ++;
			len --;
		}
		if (!*little)
			return ((char *)start_big);
		little = start_little;
		big = start_big + 1;
		len --;
	}
	return (NULL);
}
