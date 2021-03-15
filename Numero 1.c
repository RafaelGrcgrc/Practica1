#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10];
    int i;
    printf("Por favor ingrese valores enteros al arreglo\n");
    for(i=0; i<10; i++){
        printf("\nElemento %d: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n\nLas direcciones de memoria de los elementos son:\n");
    for(i=0; i<10; i++){
        printf("\nLa direccion de memoria para el %d elemento [%d] es: %p", i+1, A[i], &A[i]);
    }
    printf("\n\nLa direccion de memoria del arreglo es: %p\n", &A);
    printf("\n");
    
    return 0;
}
