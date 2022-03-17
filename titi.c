#include<stdio.h>
int main()
{
    int x,y;
    int result;
    printf("enter the value of x:\n");
    scanf("%d\n",&x);
    printf("enter the value of y:\n");
    scanf("%d\n",&y);
    result=compare(x,y);
    printf("the largest value btwn the two is:\n");
    return 0;
}
