#include <stdio.h>

int main(){
    int a = 7;
    int *aPtr = &a;

    printf("La direccion de a es: %p"
    "\nEl valor de *aPtr es %p", &a, aPtr);
    printf("\nEl valor de a es: %d"
    "\nEl valor de *aPtr es %d", a, *aPtr);
}

/*
gcc -o punteros_declaracion punteros_declaracion.c
punteros_declaracion
*/