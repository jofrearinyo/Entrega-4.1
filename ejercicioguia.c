#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char argv[]) {

    char peticion[100];
    char respuesta[100];

    strcpy (peticion, "Jofre/33/Oriol/25/Victor/12/Jose/79");
    //resultado: Jofre*33-Oriol*25-Victor*19-Jose*79
    
    char nombre[10];
    int edad;

    char *p = strtok (peticion, "/");
    strcpy (nombre,p);
    p = strtok (NULL, "/");
    edad = atoi (p);
    if (edad>=18)
        sprintf (respuesta,"%s%s%d-", respuesta,nombre,edad);

    p = strtok (NULL, "/");
    strcpy (nombre,p);
    p= strtok (NULL,"/");
    edad = atoi (p);
    if (edad>=18)
        sprintf (respuesta,"%s%s%d-", respuesta,nombre,edad);

    p = strtok (NULL, "/");
    strcpy (nombre,p);
    p= strtok (NULL,"/");
    edad = atoi (p);
    if (edad>=18)
        sprintf (respuesta,"%s%s%d-", respuesta,nombre,edad);

    p = strtok (NULL, "/");
    strcpy (nombre,p);
    p= strtok (NULL,"/");
    edad = atoi (p);
    if (edad>=18)
        sprintf (respuesta,"%s%s%d", respuesta,nombre,edad);


    printf ("Resultado: %s\n", respuesta);






    return 0;
}