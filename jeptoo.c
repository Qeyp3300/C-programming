#include <stdio.h>
int main()
{
	int height,weight;
	float BMI;
	printf("enter the weight,height  :”);
	scanf("%d%d",&weight,&height);
	BMI=(weight/(height*height));
	if(bmi<18.5)
		printf("under weight");
	else if(BMI>18.5 && BMI<24.9)
	printf("healthy bitch");
	else if(BMI=25.0||BMI<29.9);
	else
	printf 	("obese");
	return 0;
	
	
}