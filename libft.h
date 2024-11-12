/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:04:31 by ygille            #+#    #+#             */
/*   Updated: 2024/11/12 14:32:58 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#IFNDEF LIBFT_H
# DEFINE LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
#ENDIF