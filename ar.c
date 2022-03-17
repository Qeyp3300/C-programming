#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int i,sum=0;
for(i=0;i<5;i++){
sum+=a[i];
}
printf("The sum is=%d\n",sum);
return 0;
}
