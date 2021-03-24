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

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memset( array, 0, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}