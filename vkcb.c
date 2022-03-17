#include<stdio.h>
int main()
{
    int marks;
    char grades;
    marks=50;
    if(marks>=70 &&marks<=100)
        printf("%c\n",'A');
    else if(marks>=60 &&marks<=70)
        printf("%c\n",'B');
        else if(marks>=50 &&marks<=60)
        printf("%c\n",'C');
        else if(marks>=40 &&marks<=50)
        printf("%c\n",'D');
       else
        printf("%c\n",'E');
        return 0;
}
