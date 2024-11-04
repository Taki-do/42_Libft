/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:06:31 by taomalbe          #+#    #+#             */
/*   Updated: 2024/10/29 14:59:49 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			full_len;
	unsigned char	*calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	full_len = nmemb * size;
	calloc = (unsigned char *)malloc(full_len * size);
	if (!calloc)
		return (NULL);
	ft_bzero(calloc, full_len * size);
	return ((void *)calloc);
}
