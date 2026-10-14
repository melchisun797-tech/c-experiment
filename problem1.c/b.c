#include <stdio.h>
#include "myfunction.h"
int main()
{
    int r=add(20,10);
    int z=sub(20,10);
    int y=mul(20,10);
    int x=div(20,10);
    printf("Sum = %d\n",r);
    printf("Sub = %d\n",z);
    printf("Mul = %d\n",y);
    printf("div = %d\n",x);
    return 0;
}
