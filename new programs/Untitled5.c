#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,rem=0,sum=0;
for(i=1;i<=500;i++)
{n=i;
while(i!=0)
{

rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;

}
printf("%d\n",sum);
}
getch();

}
