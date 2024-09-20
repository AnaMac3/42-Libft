/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:16:18 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/19 13:22:14 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	char		*start_subs;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return ("");
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	start_subs = substr;
	while (len)
	{
		*substr = s[start];
		start ++;
		substr ++;
		len --;
	}
	substr = "\0";
	return (start_subs);
}
