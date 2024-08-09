#include <stdio.h>
#define ARRAY_SIZE 4

int main()
{
    int b[] = {10, 20, 30, 40};     // Inicializamos el arreglo
    int *bPtr = b;                  // Guardamos la direccion de inicio del arreglo

    puts("Valores en el arreglo");

    for(int i= 0; i < ARRAY_SIZE; ++i){
        printf("b[%u] = %d\n", i, b[i]);
    }
    puts("");

    puts("Valores desde la dirección");
    for (int offset = 0; offset < ARRAY_SIZE; ++offset){
        printf("*(b + %u) = %d\n", offset, *(b + offset));
    }
}
//Emplear el offset con bPtr
//Visualizar las direcciones que se obtienen al sumar el offset.
//Experimentar otros tipo de variables

/*
gcc -o arreglos_propiedades arreglos_propiedades.c
arreglos_propiedades
*/