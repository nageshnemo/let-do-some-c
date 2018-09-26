#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;

printf("enter number");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
if(n%i==0)
{
printf("no is not prime");
break;
}

}
if(i==n)
printf("no is prime");
}
getch();
