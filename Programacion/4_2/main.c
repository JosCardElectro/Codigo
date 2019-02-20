#include <stdio.h>
#include <stdlib.h>
#define a 9.8
int main()
{
    int tiempo;
    int distancia;
    for(tiempo=1;tiempo <= 5;tiempo=tiempo+1)
    {
    distancia=0.5*a*tiempo*tiempo;
    printf("La distancia despues de %d segundos es de %d metros.\n",tiempo,distancia);

    }
  printf("FIn del Bucle\n");
}
