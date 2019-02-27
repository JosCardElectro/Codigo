#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,numero;//Numero leìdo
    printf("Cantidad de elementos:");
    scanf("%d",&numero);
    for(i=1;i<=numero;i++){
        printf("%d , ",fibonacci(i));
    }
return 0;

}
//Recursividad
int fibonacci(int n)//
{
if(n==0 || n==1)//Caso Base
    {
    return n;
} else {
return (fibonacci(n-1)+fibonacci(n-2));//Funcion
}
}
