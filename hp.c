#include<stdio.h>
void swap(int ,int );
void main()
{
int x=5,y=7;
printf("x=%d \n y=%d\n",x,y);
fun(&x,&y);
}
void fun(int *m,int *n)
{
 *n=7,*m=5;
printf("x=%d\n y=%d\n",*m,*n);

}
