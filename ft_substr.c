/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:16:18 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/12 16:54:40 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	char		*start_subs;
	size_t		end;

	substr = (char *)malloc(len + 1);
	start_subs = substr;
	if (substr == NULL)
		return (NULL);
	end = start + len;
	while (start <= end)
	{
		*substr = s[start];
		start ++;
		substr ++;
	}
	return (start_subs);
}
