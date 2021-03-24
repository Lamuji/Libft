#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main()
/*{
   char chaine[15] = "Bonjour";
    char chaine1[15] = "cava";

    //printf("%lu\n", ft_strlcat(chaine, chaine1, 10));
   // printf("%s", strdup(chaine));

*/
 {
    int i_array[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    short s_array[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    size_t pos = 0;
 
    bzero(i_array, (6 * sizeof(int)));
    bzero(s_array, (10 * sizeof(short)));
 
    for(; pos < 10; pos++) {
        printf("%lu: %d\n", (pos + 1), i_array[pos]);
    }
 
    for(pos = 0; pos < 12; pos++) {
        printf("%lu: %d\n", (pos + 1), s_array[pos]);
    }
 
    return 0;
}