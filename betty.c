#include<stdio.h>
int main()
{
    int mon,tue,wed,thur,fri;
    float temp;
    printf("enter the temp");
    scanf("%f\n,%f\n,%f\n,%f\n,%f\n",&mon ,&tue, &wed ,&thur ,&fri);
    float average;
    average=((mon+tue+wed+thur+fri)/5);
    printf("%f\n",average
    return 0;
}