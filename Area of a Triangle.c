#include<stdio.h>
int main()
{int a,b,c;
float S,A;
printf("Enter the values of a,b,c: \n");
scanf("%d %d %d",&a,&b,&c);
S=(a+b+c)/2;
A=sqrt(S*(S-a)*(S-b)*(S-c));
printf("Area of triangle is :%f",A);
return 0;
}
