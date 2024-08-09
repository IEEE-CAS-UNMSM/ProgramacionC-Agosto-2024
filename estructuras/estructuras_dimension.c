#include <stdio.h>

// Definición de la estructura
struct trabajador {
    char nombre[20];
    char apellido[20];
    unsigned int edad;
    long long identificacion;
    double salario;
};

int main() {
    struct trabajador empleado1 = {"Carlos", "García"};
    printf("Dirección de la estructura empleado1: %p\n", &empleado1);
    printf("Dirección del miembro nombre: %p\n", &empleado1.nombre);
    printf("Dirección del miembro apellido: %p\n", &empleado1.apellido);
    printf("Dirección del miembro age: %p\n", &empleado1.edad);
    printf("Dirección del miembro genero: %p\n", &empleado1.identificacion);
    printf("Dirección del miembro salario: %p\n", &empleado1.salario);
    
    puts("");
    
    struct trabajador empleado2 = {"Natalie", "Red"};
    printf("Dirección de la estructura empleado2: %p\n", &empleado2);
    printf("Dirección del miembro nombre: %p\n", &empleado2.nombre);
    printf("Dirección del miembro apellido: %p\n", &empleado2.apellido);
    printf("Dirección del miembro age: %p\n", &empleado2.edad);
    printf("Dirección del miembro genero: %p\n", &empleado2.identificacion);
    printf("Dirección del miembro salario: %p\n", &empleado2.salario);
}

/*
gcc -o estructuras_dimension estructuras_dimension.c
estructuras_dimension
*/