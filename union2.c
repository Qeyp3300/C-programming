
#include<stdio.h>
#include<string.h>
union unionexample{
char name[30];
int id;
float salary;
}unionex1;
/*struct structexample{
char name[20];
float salary;
int id;
}structex1;*/
int main()
{
/*printf("the size of the union in this example is:%d\n",sizeof(unionex1));
printf("\n the size of the struct in this example is:%d\n",sizeof(structex1));*/
unionex1.salary=1000;
unionex1.id=234567;
printf("salary=%d\n idnumber=%d",unionex1.salary,unionex1.id);
return 0;
}
