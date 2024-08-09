#include <stdio.h>
#define SIZE 5

void modificarArreglo(int b[], int dimension);
void modificarElemento(int e);

int main()
{
    int a[SIZE] = {0, 1, 2, 3, 4};
    puts("Valores actuales en el arreglo: ");
    for (int i=0; i < SIZE; ++i){
        printf("%3d", a[i]);
    }
    puts("");

    puts("Valores modificados por elemento: ");
    for (int i = 0; i < SIZE; ++i){
        modificarElemento(a[i]);
    }
    puts("");
    
    puts("Valores actuales en el arreglo: ");
    for (int i=0; i < SIZE; ++i){
        printf("%3d", a[i]);
    }
    puts("");

    puts("Los valores modificados del arreglo son:");
    modificarArreglo(a,SIZE);
    for (int i = 0; i < SIZE; ++i){
        printf("%3d", a[i]);
    }
    puts("");

    puts("Valores actuales en el arreglo: ");
    for (int i=0; i < SIZE; ++i){
        printf("%3d", a[i]);
    }
    puts("");
}

void modificarArreglo(int b[], int dimension)
{
    for (int j = 0; j < dimension; ++j){
        b[j] *= 2;
    }
}

void modificarElemento( int e)
{
    printf("%3d", e *=2);
}

//Agregar una funcion para imprimir los valores actuales del codigo
//Rama para modificar la funcion modificarArreglo para que solo necesite su primer parametro
//?=sizeof(arreglo_nombre)/sizeof(arreglo_nombre[0])

/*
gcc -o arreglos_punteros arreglos_punteros.c
arreglos_punteros
*/
