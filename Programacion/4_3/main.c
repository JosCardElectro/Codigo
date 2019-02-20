#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    int numero1=0;
    int numero2=0;

    for(contador=1;contador <= 5; contador++)
    {
    printf("Post-incremento del numero = %d",numero1++);
    printf("Pre-incremento del numero = %d\n",++numero2);
    }
}
