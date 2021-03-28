#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#include <assert.h>
#define INT_NUMBER 10

/*{
   char chaine[15] = "Bonjour";
    char chaine1[15] = "ca va";

    printf("%s\n", ft_substr(chaine, 'o', 1));
   //printf("%s", memcpy(chaine));
}*/
int main(int argc, char * argv[])
{

    char str[14] = "GeeksForGeeks";
    char nstr[27] = " is for programming geeks.";
    printf("%s\n",ft_strjoin(str, nstr));
    //printf("%d", strjoin(str, nstr, '.', 14));
    return 0;
}
/*{

    // On cherche à lire une ligne de texte à partir du clavier.
    char buffer[ 255 ];
    printf( "Veuillez saisir une ligne de texte contenant le mot \"admin\" : \n" );
    scanf( "%[^\n]", buffer );
    // Pour supprimer le caractère '\n' du flux pour la prochaine lecture.
    fgetc( stdin );

    // Recherche de la présence de la chaîne "admin" dans la saisie.
    char * result = ft_strnstr( buffer, "admin", 4 );

    // Affichage d'une réponse à l'utilisateur.
    if ( result == NULL ) {
        puts( "Vous n'avez pas saisi le mot admin" );
    } else {
        puts( "La chaîne contient le mot admin" );
    }

    return EXIT_SUCCESS;
}*/