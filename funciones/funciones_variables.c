#include <stdio.h>

int cuadrado(int y);  //Prototipo 

int main(void){
    for (int x = 1; x <= 10; ++x){
        printf("%d ", cuadrado(x));
    }
    puts("");
}

int cuadrado(int y){ //Parametros
    return y*y;
}
//Definir un header

/*
Colocar en la terminal:
gcc -o funciones_variables funciones_variables.c
funciones_variables
*/