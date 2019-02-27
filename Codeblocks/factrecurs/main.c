#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Valor de factorial => ");
   scanf("%d",&n);
   printf("Fatorial es %d",fact(n));
}
int fact(int num)
{
    if (num==0){
        return (1);
    }else {
    return (num*fact(num-1));
    }
}
