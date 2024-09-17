/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:56:25 by amacarul          #+#    #+#             */
/*   Updated: 2024/09/12 15:38:11 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*reslt_ar;
	size_t			i;

	reslt_ar = malloc(nmemb * size);
	if (!reslt_ar)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		*reslt_ar = 0;
		i ++;
	}
	return (reslt_ar);
}
