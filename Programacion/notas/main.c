#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Ingrese el numero de notas:\n");
    scanf("%d",&a);
    float Nota[a];
    float suma,prom;
    int n,i;
    for(i=0,n=a;i<n;i++)
    {
    printf("Ingrese nota:\n");
    scanf("%f",&Nota[i]);
    }
    for(i=0,suma=0;i<n;i++)
    {
    suma+=Nota[i];
    }
    prom=suma/n;
    printf("%f\n",prom);

    return 0;

}
