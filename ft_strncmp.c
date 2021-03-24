/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:37:20 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/23 13:51:48 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *dest, const char *src, size_t n)
{
    size_t i;
    i = 0;
    
    if (n == 0)
        return (0);
    while(src[i] == dest[i] && src[i] != '\0' && dest[i] != '\0' && i < (n - 1))
    i++;
        return dest[i] - src[i];
}