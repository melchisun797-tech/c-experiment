#include <stdio.h>
#ifndef MYFUNCTION_H
#define MYFUNCTION_H
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a , int b)
{
    return a * b;
}
int div(int a , int b)
{
    return a / b;
}
#endif
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
