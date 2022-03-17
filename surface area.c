#include<stdio.h>
int surfaceArea(int x,int y);
int main()
{
int radius,height,surfaceArea;
float pie=3.142;
printf("enter the radius:\n");
scanf("%d",&radius);
printf("enter the height:\n");
scanf("%d",&height);
surfaceArea=(2*pie*radius*radius)+(pie*(radius+radius)*height);
printf("%d\n",surfaceArea);
}
int surfaceArea(int x,int y)
{
int result;
result=(x,y);
return result;
}
