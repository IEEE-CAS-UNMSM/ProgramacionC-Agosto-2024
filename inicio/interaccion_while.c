#include <stdio.h>

int main(void)
{
    int contador = 1;            //Definimos e inicializamos la variable en 1
    while (contador <= 10){
        printf("%u\n",contador);
        ++contador;
    }
    // Emplear break en contador = 5
    // Emplear continue en contador = 7
}

/*
Colocar en la terminal:
gcc -o interaccion_while interaccion_while.c
Se define despues del -o el archivo de salida (.exe) y el archivo de entrada el primero.c
*/
