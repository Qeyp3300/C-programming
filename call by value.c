#include<stdio.h>
void swap(int x,int y);
int main()
{
int m,n;
m=5;
n=8;
printf("values before swap m=%d\n and n=%d\n",m,n);
swap(m,n);
}
void swap(int x,int y)
{
int num;
x=num;
x=y;
num=y;
printf("values after swap m=%d\n and n=%d\n",x,y);
}
