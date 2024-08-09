#include <stdio.h>

unsigned long long int factorial (unsigned int number);

int main()
{
    for (unsigned int i=0; i<=21; ++i){
        printf("%u! = %llu\n",i,factorial(i));
    }
}

unsigned long long int factorial (unsigned int number)
{
    if (number <= 1){
        return 1;
    }
    else {
        return (number*factorial(number-1));
    }
}

// Desarrollar el factorial con for o while
// Desarrollar fibonacci
// Actividad desarrollar Torres de Hanoi


/*
gcc -o funciones_recursivas funciones_recursivas.c
funciones_recursivas
*/