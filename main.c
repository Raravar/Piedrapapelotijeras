// Juego simple de piedra papel o tijeras desarrollado por Raravar.

#include <stdlib.h>
char jugador[10];
signed int puntuacion;

void guardado();

int main()
{
    printf("Ingrese su nombre de jugador : ");
    scanf("%s", jugador);
    printf("Bienvenido %s", jugador);
    return 0;

};