#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void funcion0(int a);
void funcion1(int b);
void funcion2(int c);


int main()
{
    srand(time(NULL));
    void (*f[3])(int) = {funcion0, funcion1, funcion2};
    puts("Cambiar la variable entre el 0 y 2");
    int eleccion = 0;
    int contador = 0;
    while(eleccion >= 0 && eleccion < 3 && contador <10){
        (f[eleccion])(eleccion);
        eleccion = rand() % 3;
        ++contador;
    }
}

void funcion0(int a)
{
    printf("Elección %d, funcion 0 llamada\n",a);
}
void funcion1(int b)
{
    printf("Elección %d, funcion 1 llamada\n",b);
}
void funcion2(int c)
{
    printf("Elección %d, funcion 2 llamada\n",c);

}

/*
gcc -o arreglos_funciones arreglos_funciones.c
arreglos_funciones
*/
