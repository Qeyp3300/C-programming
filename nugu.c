#include<stdio.h>
int factorial(int i)
{
    if(i<1)
    {
        return 1;
    }
    else if(i)
    return factorial(i)*factorial(i-1);
}
int main()
{
    int i=15;
    printf("%d\n",factorial(i));
    return 0;
}
