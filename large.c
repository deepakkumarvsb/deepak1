#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a is learge");
}
else if(b>c)
{
printf("b is learger");
}
else
{
printf("c is larger");
}
return 0;
}
