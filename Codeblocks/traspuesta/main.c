#include <stdio.h>

int main() {
	int m, n, c, d, matrix[10][10], trans[50][50];

	printf("Ingrese el número de filas y columnas (Ejemplo: 2 5): ");
	scanf("%d%d",&m,&n);
	printf("Ingrese los elementos de la matriz (ejemplo 1 30): \n");

	for(c=0;c<m;c++){
		for(d=0;d<n;d++){
			scanf("%d",&matrix[c][d]);
		}
	}

	for(c=0;c<m;c++){
		for(d=0;d<n;d++){
			trans[d][c] = matrix[c][d];
		}
	}

	printf("La transpuesta es: \n");

	for(c=0;c<n;c++){
		for(d=0;d<m;d++){
			printf("%d\t",trans[c][d]);
		}
		printf("\n");
	}

	return 0;
}
