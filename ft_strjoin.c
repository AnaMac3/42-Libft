/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:45:39 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/13 10:11:09 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*start_joined;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *) malloc (total_len + 1);
	start_joined = joined;
	if (joined == NULL)
		return (NULL);
	while (*s1)
	{
		*joined = *s1;
		s1 ++;
		joined ++;
	}
	while (*s2)
	{
		*joined = *s2;
		s2 ++;
		joined ++;
	}
	*joined = '\0';
	return (start_joined);
}