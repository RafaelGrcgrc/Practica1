#include <stdio.h>
#include <stdlib.h>

int main() {
    int B[3][3];
    int i, j, n=1;
    printf("Por favor ingrese valores enteros al arreglo\n");
    for(i=0; i<3; i++)
		for(j=0; j<3; j++){
        	printf("\nColumna %d, Elemento %d: ", i+1, j+1);
        	scanf("%d", &B[i][j]);
    	}
    printf("\n\nLas direcciones de memoria de los elementos son:\n");
    for(i=0; i<3; i++)
		for(j=0; j<3; j++){
        	printf("\nLa direccion de memoria para el %d elemento [Fila %d, Columna %d] es: %p", n, i+1, j+1, &B[i][j]);
        	n++;
    	}
    printf("\n\nLa direccion de memoria del arreglo es: %p", &B);
    printf("\n");
    
    return 0;
}
