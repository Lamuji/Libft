/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:54:47 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/24 08:53:03 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_len;
    
    i = 0;
    src_len = 0;
    
    while(src[i] != '\0' && i < (size - 1))
        {
           dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    
    while(src[src_len])
    {
        src_len++;
    }
    return (src_len);
}

