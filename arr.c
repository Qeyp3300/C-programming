#include<stdio.h>
int main()
{
 int n[10];
 int i,j;
 for(i=1;i<10;i++)
 {
 n[i]=i+0;
 }
 for(j=1;j<10;j++)
 {

 printf("n[%d]=%d\n",j,n[j]);
 }
 return 0;
}
