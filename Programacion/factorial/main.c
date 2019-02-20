#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact;
    printf("Ingrese el numero factorial:\n");
    scanf("%d",&n);
    i=1;
    fact=1;
    while(i<=n){
    fact=fact*i;
    i++;
    }

    printf("Factoria de %d es %d:\n",n,fact);

    return 0;
}
