#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("Ingrese el numero de notas:\n");
    scanf("%d",&a);
    float Nota[a],suma;
    for(i=0,suma=0;i<a;i++)
    {
    printf("Ingrese nota %i:\n",i+1);
    scanf("%f",&Nota[i]);
    suma+=Nota[i];
    }
    if(suma/a > 5 || suma/a < 0){
    printf("Dato invalido\n");
    }else if(suma/a >= 3 && suma/a<=5){
    printf("Gano : %.2f\n",suma/a);
    }else if(suma/a >= 2 && suma/a < 3){
    printf("Habilita: %.2f\n",suma/a);
    }else if(suma/a >=0 && suma/a < 2){
    printf("Perdio:%.2f\n",suma/a);
    }
    //printf("Su promedio es: %.2f\n",suma/a);

    return 0;

}
