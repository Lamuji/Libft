#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#include <assert.h>
#define INT_NUMBER 10

int main()

/*{
   char chaine[15] = "Bonjour";
    char chaine1[15] = "ca va";

    printf("%s\n", ft_substr(chaine, 'o', 1));
   //printf("%s", memcpy(chaine));
}*/

{

    char str[14] = "GeeksForGeeks";
    //char nstr[27] = " is for programming geeks.";
    printf("%s\n",ft_substr(str, 0, 4));
 //   printf("%s",memccpy(str, nstr, '.', 14));
    return 0;
}
