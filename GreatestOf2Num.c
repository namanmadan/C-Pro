#include<stdio.h>

int main(void)
{	
	int num1,num2;
	printf("Enter two numbers: \n");
	scanf("%d%d",&num1,&num2);
	if (num1/num2)
	{
		printf("Greatest number is %d",num1);
	}
	else
	{
		printf("Greatest number is %d",num2);
	}
	return 0;
}