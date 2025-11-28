#include<stdio.h>
main()
{
	int a;
	int b;
	printf("Enter the value of a:");
	scanf("%d",&a);
    printf("Enter the value of b:");
	scanf("%d",&b);
	//peforming operations on a,b
	printf("a is less than b %d \n",a<b);
	printf("a is greater  than b %d \n",a>b);
	printf("a is less than or equal to b %d \n",a<=b);
	printf("a is greater than or equal to  b %d \n",a>=b);
	printf("a is equal b %d \n",a=b);
}
