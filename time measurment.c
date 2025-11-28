#include<stdio.h>
int main()
{
	int tm,m,h;
	printf("Enter the total minutes:");
	scanf("%d",&tm);
	h=tm/60;
	m=tm%60;
	printf(" \n Time is %d hours and %d minutes:",h,m);
	printf("\n");
}

