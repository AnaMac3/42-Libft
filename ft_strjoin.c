/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <amacarul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:45:39 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/21 18:14:24 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*start_joined;
	size_t	total_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *) malloc (total_len + 1);
	if (joined == NULL)
		return (NULL);
	start_joined = joined;
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
