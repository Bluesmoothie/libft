/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:00:08 by ygille            #+#    #+#             */
/*   Updated: 2025/02/07 16:31:49 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_memory.h"

/*
** Malloc nmemb * size bytes then
** initialize each byte to 0
** return the allocated address or NULL on error
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	long	overflow;

	overflow = nmemb * size;
	if (overflow > INT_MAX)
		return (NULL);
	array = malloc (overflow);
	if (array == NULL)
		return (NULL);
	ft_bzero (array, overflow);
	return (array);
}
