#include <stdio.h>
#include "../headers/bits_binario.h"

int main()
{
    

    unsigned int numero1 = 65535;
    unsigned int mask = 1;
    puts("El resultado de combinar");
    mostrarBits(numero1,4); 
    mostrarBits(numero1&mask,4); 

    numero1 = 15;
    unsigned int setBits = 241;
    puts("\nEl resultado de combinar");
    mostrarBits(numero1,4); 
    mostrarBits(setBits,4); 
    puts("Usando el operador | 'OR'");
    mostrarBits(numero1 | setBits,4); 


    numero1 = 139;
    unsigned int numero2 = 199;
    puts("\nEl resultado de combinar");
    mostrarBits(numero1,4); 
    mostrarBits(numero2,4); 
    puts("Usando el operador | 'XOR'");
    mostrarBits(numero1^numero2,4); 

    numero1 = 21845;
    puts("\nEl complemento del numero1");
    mostrarBits(numero1,4); 
    puts("es");
    mostrarBits(~numero1,4); 
}

/*
gcc -o bits_manipulacion bits_manipulacion.c
bits_manipulacion
*/