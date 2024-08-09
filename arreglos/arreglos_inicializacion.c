#include <stdio.h>

int main(void)
{
    int n[5];
    for (int i = 0; i < 5; ++i){
        n[i] = 0;
    }

    //int n[5] = {0,0,0,0,0}; Método de inicialización 2
    //int n[5] = {0};         Método de inicialización 3

    printf("%s\t%s\n","Pos", "Valor");

    for (int i=0; i < 5; ++i){
        printf("%d\t%d\n", i, n[i]);
    }
}

//Visualizar porque es necesario inicializar un arreglo
//Reconocer el tamaño de un arreglo
//Formar arreglos de diferentes tipos

/*
gcc -o arreglos_inicializacion arreglos_inicializacion.c
arreglos_inicializacion
*/