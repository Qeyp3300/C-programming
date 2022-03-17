#include<stdio.h>
struct devices {
    char brand[10];
    float prize;
    int ram;
    int rom;
};

int main()
{
    struct devices name[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("enter brand name");
        scanf("%s\n",name[i].brand);
        printf("enter phones prize");
        scanf("%f\n",&name[i].prize);
        printf("enter phones ram");
        scanf("%d\n",&name[i].ram);
        printf("enter phones rom");
        scanf("%d\n",&name[i].rom);
    }
    for(i=0;i<4;i++)
    {
     printf("%s\n,%f\n,%d\n,%d\n",name[i].brand,name[i].prize,name[i].ram,name[i].rom);
    }
    return 0;
}
