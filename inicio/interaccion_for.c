#include <stdio.h>

int main(void)
{
    for (int contador = 1; contador <= 10; contador++){ //Se define e inicializa variable
        if (contador == 5){
            continue;
        }
        printf("%u\n",contador);

    }
    // Emplear break en contador = 5
    // Emplear continue en contador = 7

}

/*
Colocar en la terminal:
gcc -o interaccion_for interaccion_for.c
./interaccion_for
*/