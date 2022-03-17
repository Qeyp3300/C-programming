#include<stdio.h>
int main()
{
int n[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
int i,j;
for(i=1;i<10;i++){
for(j=1;j<10;j++)
{
printf("n[%d][%d]=%d\n",i,j,n[i][j]);
}
}
return 0;
}
