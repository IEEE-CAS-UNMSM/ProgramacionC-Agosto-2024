#include <stdio.h>

int cuboValor(int n);
void cuboReferencia(int* n);

int  main(){
    int numero = 5;
    printf("El valor inicial de valor es: %d\n",numero);

    numero = cuboValor(numero);
    printf("El valor del numero despues de modificacion por valor: %d\n",numero);

    numero = 5;
    printf("El valor inicial de valor es: %d\n",numero);

    cuboReferencia(&numero);
    printf("El valor del numero despues de modificacion por referencia: %d\n",numero);

    //Volver a llamar a la funcion cuboValor
}

int cuboValor(int n){
    return n*n*n;
}
void cuboReferencia(int* nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}

// Rama donde no se pueda modificar el valor por Referencia. Pista -> const

/*
gcc -o punteros_acceso punteros_acceso.c
punteros_acceso
*/