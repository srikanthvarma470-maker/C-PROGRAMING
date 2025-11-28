#include<stdio.h>
int main()
{
	int pa,t,r,i;
	printf("Enter principal amount:");
	scanf("%d",pa);
	printf("Enter time in years:");
	scanf("%d",t);
	printf("Enter rate of intrest per anum :");
	scanf("%d",r);
	i=(pa*t*r)/100;
	printf("\n intrest is Rs. %d for %d years is Rs.%d",pa,t,i);
	printf("\n");
	
}

