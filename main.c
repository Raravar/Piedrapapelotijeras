// Juego simple de piedra papel o tijeras desarrollado por Raravar

/*Por hacer:
- Desarrollar Jugadas y algoritmo de juego
- Desarrollar jugadas del PC como respuesta
- Guardar la puntuacion en el archivo correspondiente al nombre del jugador
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buffer;
char jugador[15] = "";
char nomArchivo[15] = "";
char puntuacion = 0;

void registro()
{
    printf("Ingrese su nombre de jugador : ");
    scanf("%s", jugador);
    memcpy(nomArchivo, jugador, sizeof(jugador)); // Copiamos los caracteres basados en el num y direccion de memoria de Jugador
    strcat(nomArchivo, ".dat");

    FILE *archivo;  // Puntero para la creacion de archivo
    archivo = fopen(nomArchivo, "r");
    if(archivo == NULL)
    {
        archivo = fopen(nomArchivo, "w");
        fwrite(&puntuacion, sizeof(int), 1, archivo);
        fclose(archivo);
    }
    archivo = fopen(nomArchivo, "r");
    fread(&buffer, sizeof(int), 1, archivo);
    printf("Bienvenido %s, su puntuacion actual es: %d\n", jugador, buffer);
    fclose(archivo);
};

int main()
{
    registro();
    return 0;
};