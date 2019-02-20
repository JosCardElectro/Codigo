#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3;
    int c=10;
    printf("i=%d\n",i);
    printf("c=%d\n",c);
    printf("x=i++ => %d\n",i++);
    printf("x=++i => %d\n",++i);
    printf("x=c++ => %d\n",c++);
    printf("x=--c+2 => %d\n",(--c+2));
    printf("x=i-- + ++c => %d\n",(i-- + ++c));
}
