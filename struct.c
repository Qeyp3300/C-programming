#include<stdio.h>
#include<string.h>
struct person{
char name[20];
int id_no;
float salary;
};
int main()
{
struct person emp1,emp2;
strcpy(emp1.name,"james john");
      emp1.id_no=23456;
      emp1.salary=176900;
      strcpy(emp2.name,"james vin");
      emp2.id_no=654321;
      emp2.salary=39446256;
      printf("emp one dtails:\n %s\t %d\t %.2f\n",emp1.name,emp1.id_no,emp1.salary);
        printf("emp two dtails:\n %s\t %d\t %.2f",emp2.name,emp2.id_no,emp2.salary);
       return 0;;
       }
