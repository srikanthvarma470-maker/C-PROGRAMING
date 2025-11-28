#include<stdio.h>
int main()
{
	int mat,phy,che,c,eng,tot,avg;
	printf("enter marks for maths:");
	scanf("%d",&mat);
	printf("enter marks for physics:");
	scanf("%d",&phy);
	printf("enter marks for chemistry:");
	scanf("%d",&che);
	printf("enter marks for c:");
	scanf("%d",&c);
	printf("enter marks for english:");
	scanf("%d",&eng);
	tot=mat+phy+che+c+eng;
	avg=tot/5;
	printf("total marks is %d:",tot);
	printf("avg marks is %d:",avg);
	printf("\n");
}


