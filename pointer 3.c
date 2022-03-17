#include<stdio.h>
void test()
{
int v[3]={10,100,200};
int *ptr;
ptr=&v;
for(int i=0;i<3;i++){
printf("value at ptr=%x\n",ptr);
printf("value at ptr=%x\n",*ptr);
}
}
int main()
{
test();
}
