#include <stdio.h>

// Definición de la estructura
struct Notas {
    int examen;
    float proyecto;
};

int main() {
    // Inicialización de una variable de tipo struct Notas
    struct Notas notas1 = {85, 9.5};
    struct Notas *notas1Ptr = &notas1;

    puts("VALORES INICIALES");
    puts("Visualización por Valores");
    printf("Examen: %d\n", notas1.examen);
    printf("Proyecto: %.2f\n\n", notas1.proyecto);

    // Modificación de los valores
    notas1.examen = 90;
    notas1Ptr->proyecto = 9.8;

    puts("VALORES MODIFICADOS");
    printf("Examen: %d\n", notas1Ptr->examen);
    printf("Proyecto: %.2f\n", notas1Ptr->proyecto);
    
}

/*
gcc -o estructuras_declaracion estructuras_declaracion.c
estructuras_declaracion
*/