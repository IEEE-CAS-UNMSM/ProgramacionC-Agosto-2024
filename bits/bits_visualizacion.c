#include <stdio.h>
#include "../headers/bits_binario.h"


int main()
{
    unsigned int x = 324589;
    puts("Visualizacion de la variable x");
    printf("Decimal:\t%d\n", x);
    printf("Hexadecimal:\t%x\n", x);
    printf("Binaria:\t");
    mostrarBits(x,1);
}

/*
gcc -o bits_visualizacion bits_visualizacion.c
bits_visualizacion
*/