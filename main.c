#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#define ELEMENT_COUNT 10

int main()

/*{
   char chaine[15] = "Bonjour";
    char chaine1[15] = "ca va";

    printf("%s\n", ft_memcpy(chaine, chaine1, 1));
   printf("%s", memcpy(chaine));
}

{

    char str[14] = "GeeksForGeeks";
    char nstr[27] = " is for programming geeks.";
    printf("%s\n",ft_memccpy(str, nstr, '.', 14));
    printf("%s",memccpy(str, nstr, '.', 14));
    return 0;
}*/
{
    char buffer[80];

    strcpy( buffer, "World");
    ft_memmove( buffer + 1, buffer, 79 );
    printf ("%s\n", buffer);
    
    return EXIT_SUCCESS;

}