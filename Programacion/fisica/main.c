#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float m1,m2,w1,w2,a,g,t1,u,t2,T,a1;
    float ac,v;
m1=93.1/1000;
g=9.8;
u=0.2;
printf("Ingrese M2:\n");
scanf("%f",&m2);
printf("Ingrese el Angulo:\n");
scanf("%f",&a);
m2=m2/1000;
w1=m1*g;
w2=m2*g;
t1=(m2*w1)*(1+u*cos(a)+sin(a));
t2=m2+m1;
T=t1/t2;
v=(u*cos(a))+sin(a);
a1=w2-(w1*v);
ac=a1/t2;
printf("La tension es:%f\n",T);
printf("La aceleracion es:%f\n",ac);
    return 0;
}
