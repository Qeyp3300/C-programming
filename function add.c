#include<stdio.h>
int product(int x,int y);
int main()
{
int ans,m,n;
m=5;
n=6;
ans=m*n;
printf("the product is:%d\n",ans);
}
int product(int x,int y)
{
int result;
result=x*y;
return result;
}
