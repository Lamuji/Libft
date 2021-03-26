/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:15:08 by hkrifa            #+#    #+#             */
/*   Updated: 2021/03/26 11:51:29 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *src;
    char *dest;
    
    i = 0;
    src = (char *)s;
    dest = malloc(sizeof(char) * len + 1);
    if(dest == NULL)
        return (0);
    while(src[i + start] != '\0' && i < len)
    {
        dest[i] = src[i + start];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}