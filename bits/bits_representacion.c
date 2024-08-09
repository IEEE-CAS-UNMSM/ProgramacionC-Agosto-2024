#include <stdio.h>
#include "../headers/bits_binario.h"

int main()
{
    puts("Visualización de la representacion en diferentes sistemas númericos");
    printf("%s\t%s\t%s\n", "Dec", "Hexa", "Binario");
    for (int i = 0; i<15; i++){
        printf("%d\t%x\t",i,i);
        mostrarBits(i,1);
    }
}

/*
gcc -o bits_representacion bits_representacion.c
bits_representacion
*/
