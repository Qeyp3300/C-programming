#include<stdio.h>
void swap(int ,int );
int main()
{
int m,n;
m=5;
n=8;
printf("values before swap m=%d\n and n=%d\n",m,n);
swap(&m,&n);
}
void swap(int x,int y)
{
int num;
num=*x;
*x=*y;
*y=num;
printf("values after swap m=%d\n and n=%d\n",*x,*y);
}

