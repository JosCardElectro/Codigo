#include <stdio.h>
#include <stdlib.h>

main(){

	int cantidadNum, i,r;

        printf("A continuacion numeros triangulares, indique cuandos desea hallar:\n ");
            scanf( "%d", &cantidadNum );
                for( i=1; i<=cantidadNum; i++ ){
                r=(i*(i+1))/2;
                printf( "   T%i = %d  \n",i , r);
                    }


    	return 0;
    }

