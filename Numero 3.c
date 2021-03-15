#include <stdio.h>
#include <stdlib.h>

int main() {
    int C[3][2][4];
    int i, j, k, n=1, m=1;
    printf("Por favor ingrese valores enteros al arreglo\n");
    for(i=0; i<3; i++)
		for(j=0; j<2; j++)
			for(k=0; k<4; k++){
        		printf("\nEn x=%d, En y=%d, En z=%d: ", i+1, j+1, k+1);
        		scanf("%d", &C[i][j][k]);
    	}
    printf("\n\nLas direcciones de memoria de los elementos son:\n");
    for(i=0; i<3; i++){
    	printf("\n");
    	printf("\nPara la matriz %d las direcciones de memoria son:\n", m);
    	m++;
		for(j=0; j<2; j++)
			for(k=0; k<4; k++){
        		printf("\nLa direccion de memoria para el %d elemento [Fila %d, Columna %d] es: %p", n, i+1, j+1, &C[i][j][k]);
        		n++;
    		}
	}
    	
    printf("\n\nLa direccion de memoria del arreglo es: %p", &C);
    printf("\n");
    
    return 0;
}
