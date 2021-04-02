/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkrifa <hkrifa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:58:17 by hkrifa            #+#    #+#             */
/*   Updated: 2021/04/02 11:57:43 by hkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  nbword(const char *s, char c)
{
  size_t i;
  size_t j;
  i = 0;
  j = 0;
  while (s[i] != '\0')
  {
    if(s[i] == c)
      j++;
    i++;
  }
  return j + 1;
}
char **ft_split(const char *s, char c)
{
  size_t i;
  size_t j_mot;
  size_t k_tab;
  char **new;
  k_tab = 0;
  new = ft_calloc(sizeof(new), nbword(s, c)+1);
  i = 0;
  while(s[i])
  {
   j_mot = 0;
    if(s[i] != c)
      {
        while (s[i + j_mot] != c && s[i + j_mot] != '\0')
            j_mot++;
        new[k_tab] = ft_calloc(sizeof(char *), (j_mot + 1));
        ft_strlcpy(new[k_tab], (char*)&s[i], j_mot);
        k_tab++;
        i = i + j_mot - 1;
      }
    i++;
  }
  new[k_tab] = 0;
  return new;
}
int main()
{
    char *n = "toto,pythontutor,42,ongalere, comment vas la mif, kepassa";
    char t = ',';
    int i = 0;
    while (ft_split(n , t)[i] != 0)
    {
        printf("%s\n",ft_split(n , t)[i]);
        i++;
    }
    return 0;
}
