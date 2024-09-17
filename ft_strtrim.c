/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:14:27 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/13 11:06:34 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*start_trimmed;
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start ++;
	trimmed = (char *)malloc(ft_strlen(s1 - start) + 1);
	if (trimmed == NULL)
		return (NULL);
	start_trimmed = trimmed;
	while (s1[start])
	{
		*trimmed = s1[start];
		trimmed ++;
		start ++;
	}
	*trimmed = '\0';
	return (start_trimmed);
}
