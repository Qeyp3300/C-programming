#include<stdio.h>
int main()
{
    float bmi;
    printf("enter the bmi:\n");
    scantf("%f",&bmi);
    if(bmi<18.5)
    {
        printf("your weight is :underweight");
    }
     else if(bmi=<18.5 && bmi>=24.9)
    {
        printf("your weight is :healthy");
    }
     else if(bmi=<25.0 && bmi>=29.9)
    {
        printf("your weight is :overweight");
    }
    else
    printf("your weight is:obese");
    return 0;
}