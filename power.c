#include<stdio.h>
#include<math.h>
int main()
{
int n,m,c;
printf("enter the number");
scanf("%d",&n);
printf("enter the power value");
scanf("%d",&m);
c=pow(n,m);
printf("the power is: %d",c);
return 0;
}
