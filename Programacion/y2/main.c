#include <stdio.h>
#include <stdlib.h>
//suma de los n primeros numeros.
int main()
{
    int cont,n;
    int suma=0;
    printf("Cantindad de numeros a sumar:\n");
    scanf("%d",&n);
    cont=1; //COnteo

    while(cont <= n){
    suma=suma+cont; //suma+=cont
    cont++;
    }

    printf("La suma es:%d",suma);
}
