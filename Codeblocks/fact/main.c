#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i,f;
    printf("Numero Factorial\n");
    scanf("%d",&n);
    for(i=1,f=1;i<=n;i++)
    {
    f=f*(i+1);
    }
    printf("El numero es:%d\n",f);

    return 0;
}
