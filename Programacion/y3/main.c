#include <stdio.h>
#include <stdlib.h>
//Multiplos de m desde 1 hasta n
int main()
{
    int n,i,m;
    printf("Cantidad de Mutiplos a comprobar:\n");
    scanf("%d",&n);
    printf("Multiplos de que nuemero:\n");
    scanf("%d",&m);
    i=1; //contador Inicializr

    while(i<=n){
    if(i%m==0){
    printf("%d\n",i);
    }
    i++;
    }

  return 0;
}
