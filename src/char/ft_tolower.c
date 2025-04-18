/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:23:44 by ygille            #+#    #+#             */
/*   Updated: 2025/04/17 12:06:59 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_char.h"

/*
** If c is a lowercase character
** return it's corresponding uppercase
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
