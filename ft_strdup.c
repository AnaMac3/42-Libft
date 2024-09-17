/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:57:00 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/16 16:29:07 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*start_dup;

	if (s == NULL)
		return (NULL);
	dup = (char *)malloc(ft_strlen(s) + 1);
	start_dup = dup;
	if (dup == NULL)
		return (NULL);
	while (*s)
	{
		*dup = *s;
		dup ++;
		s ++;
	}
	*dup = '\0';
	return (start_dup);
}
