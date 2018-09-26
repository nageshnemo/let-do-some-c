#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n;
a=1 ;
b=1;
n=10;
printf("the fibonacci series is:");
printf("%d %d",a,b);
while(n>=1)
{
    c=a+b;
a=b;
b=c;

printf("\n%d",c);
n--;
}
getch();
}
