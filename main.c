// Juego simple de piedra papel o tijeras desarrollado por Raravar

/*Por hacer:
- Guardar puntuacion y nombre del jugador en txt
- Cargar la informacion del ultimo jugador 
*/

#include <stdio.h>
#include <stdlib.h>

char jugador[10] = "";
unsigned char puntuacion = 0;

void registro()
{
    printf("Ingrese su nombre de jugador : ");
    scanf("%s", jugador);
    printf("Bienvenido %s", jugador);
    //FILE *fp;
    strcat(jugador, ".txt");
    FILE * archivo = fopen(jugador, "w+");
};

int main()
{
    registro();
    return 0;
};