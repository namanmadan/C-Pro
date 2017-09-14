// Calculator using addition only
#include<stdio.h>
#include<string.h>

int sub(int a,int b)
{
	return (a+~b+1);
}

int mul(int a, int b)
{
	int mul=0;
	for (int i=0;i<b;i++)
	{
		mul += a;
	}
	return(mul);
}

int div(int a,int b)
{
	int temp=0;
	while (a > 0) 
	{
		
		a = sub(a,b);
		temp++; 
	}
	if (a < 0 )
		temp = sub(temp,1) ;
	return temp;
}
int main(void)
{
	char oper;
	int num1,num2;
	printf("Enter the expression (Like 2 + 3):");
	scanf("%d %c %d",&num1,&oper,&num2);

	switch(oper)
	{
		case '+': printf("Result=%d",(num1+num2));
		break;
		case '-': printf("Result=%d",sub(num1,num2));
		break;
		case '*': printf("Result=%d",mul(num1,num2));	
		break;
		case '/': printf("Result=%d",div(num1,num2));
		break;
		default: printf("Syntax Error");
	}
	return 0;
}