#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#include <assert.h>
#define INT_NUMBER 10


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
/*{
    int fd;
    fd = open("42", O_WRONLY | O_RDONLY | O_CREAT);
    ft_putchar_fd('c', fd);
    return 0;



{
   char chaine[100] = "ABBBBCbonBjourAB";
    //char chaine1[15] = "ca va";

    printf("%s\n", ft_strtrim(chaine, "CCCCCAAABBB"));
   //printf("%s", memcpy(chaine));
}
int main(int argc, char * argv[])
{

    char str[100] = "fefefefefefefefefeffefefefeGeeksForGeeksfefefefefefefefefeffefefefe";
    //char nstr[27] = " is for programming geeks.";
    printf("%s",ft_strtrim(str, "fefefefefefefefefeffefefefe"));
    //printf("%d", strjoin(str, nstr, '.', 14));
    return 0;
}
{

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