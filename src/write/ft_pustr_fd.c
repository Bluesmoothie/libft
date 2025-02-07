/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:28:34 by ygille            #+#    #+#             */
/*   Updated: 2025/02/07 17:59:02 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_write.h"

/*
** Write s to fd
*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		write (fd, &s[i++], 1);
}
