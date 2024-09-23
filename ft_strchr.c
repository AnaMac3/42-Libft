/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:30:44 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/21 18:14:16 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	if (s == NULL)
		return (NULL);
	result = (char *) s;
	while (*result)
	{
		if (*result == c)
			return (result);
		result ++;
	}
	if (c == '\0')
		return (result);
	return (NULL);
}
