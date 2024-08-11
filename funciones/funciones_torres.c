#include <stdio.h>
int contador =0;
void torres_hanoi(int n, int origen, int destino, int auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %d a %d\n", origen, destino);
        ++contador;
        return;
    }
    // Mover n-1 discos desde origen a auxiliar, usando destino como auxiliar
    torres_hanoi(n-1, origen, auxiliar, destino);
    
    // Mover el disco n desde origen a destino
    printf("Mover disco %d de %d a %d\n", n, origen, destino);
    ++contador;
    
    // Mover los n-1 discos desde auxiliar a destino, usando origen como auxiliar
    torres_hanoi(n-1, auxiliar, destino, origen);
}

int main() {
    int n = 5;  // Número de discos
    torres_hanoi(n, 1, 3, 2);
    printf("\n%d: cantidad de movimientos", contador);
    return 0;
}
