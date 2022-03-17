#include<stdio.h>
#define ROW 5
#define COLUMN 5
int main()
{
int row,column,product[ROW][COLUMN],i,j;
printf("the table is here:\n \n");
printf("");
for(j=1;j<=COLUMN;j++)
{
printf("%4",j);
}
printf("\n");
printf("--------------------\n");
for(i=0;i<=ROW;i++)
{
row=i+1;
printf("%2d",row);
for(j=1;j<=COLUMN;j++)
{
column=j;
product[i][j]=row*column;
printf("%4\n",product[i][j]);
}
printf("\n");
}
return 0;
}
