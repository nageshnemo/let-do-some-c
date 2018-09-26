#include<stdio.h>
#include<conio.h>

void main()
{
int i,n,rem=0,sum=0;
for(i=1;i<=500;i++)
{n=i,rem=0;
while(n!=0)
{

rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;

}

if(i==sum)
printf("%d is armstrong number",sum);
}
}



