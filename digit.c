#include<stdio.h>
int main()
{
int n,c;
printf("enter the integer");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++c;
}
return 0;
}
