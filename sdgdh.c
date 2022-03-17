#include <stdio.h>
void test()
{
int v[]={1,67,69};
int *ptr, i;
ptr=v;
for(int i=0; i<3; i++)
{
printf("value of ptr=%x", ptr);
printf("value of ptr=%x",i,*ptr);
ptr++;
}
}
int main ()
{
test ();
}
