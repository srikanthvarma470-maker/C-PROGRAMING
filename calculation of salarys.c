#include<stdio.h>
int main()
{
	int bs,all,ded,gs,ns,bonus;
	printf("Enter basic salaray:");
	scanf("%d",&bs);
	printf("Enter allowances:");
	scanf("%d",&all);
	printf("Enter deductions:");
	scanf("%d",&ded);
	gs=bs+all;
	ns=gs-ded;
	bonus=ns*3;
	printf("gross salary is :%d \n",gs);
	printf("net salary is: %d \n",ns);
	printf("bonus is: %d \n",bonus);
	printf("\n");
}

