
#include<stdio.h>
intmain()
{int a,b;
scanf("%d%d",&a,&b);
printf("%d,%d\n",a,b);
int t =a;
a=b; 
b=t;
printf("%d, %d",a,b);
return 0;

}
