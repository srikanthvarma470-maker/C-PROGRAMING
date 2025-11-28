#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the vlue of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	//logic_1
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" \n A is :%d",a);
	printf(" \n B is: %d",b);
	printf("\n");
	//logic_2
	a=a*b;
	b=a/b;
	a=a/b;
	printf(" \n A is :%d",a);
	printf(" \n B is: %d",b);
	
}

