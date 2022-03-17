#include<stdio.h>
int main()
{
int var1;
int *ip;
ip=&var1;
printf("the address of varriable 1 is:%x\n",&var1);
printf("the address of pointer varriable 2 is:%x\n",ip);
printf("value of the *ip is:%x\n",*ip);
return 0;
}
