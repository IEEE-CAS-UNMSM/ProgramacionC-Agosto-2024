#include <stdio.h>

int main()
{
    char caracter;
    short corto;
    int entero;
    long largo;
    long long largo_largo;
    float flotante; 
    double doble;
    long double doble_largo;

    printf("\nDimension de 'char' \t= %zu"
            "\nDimension de 'short' \t= %zu"
            "\nDimension de 'int' \t= %zu" 
            "\nDimension de 'long' \t= %zu" 
            "\nDimension de 'long long' \t= %zu" 
            "\nDimension de 'float' \t= %zu"    
            "\nDimension de 'double' \t= %zu"
            "\nDimension de 'long double' \t= %zu\n",
            sizeof(caracter), sizeof(corto), sizeof(entero), sizeof(largo)
            , sizeof(largo_largo), sizeof(flotante), sizeof(doble),
            sizeof(doble_largo));
}

// Despues de arreglos y estructuras agregar sus dimensiones
//Regresar antes de manipulacion de bits para desbordamiento

/*
gcc -o dimensiones_variables dimensiones_variables.c
dimensiones_variables
*/
