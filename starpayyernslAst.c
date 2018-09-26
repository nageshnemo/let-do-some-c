#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k;
char l=1;

for(i=1;i<=4;i++)
{ k=1;
if(i%2==0)
    l='A';
    else
      l='1';
for(j=1;j<=7;j++)
{
if(j>=5-i && j<=3+i&&k)
{printf("%c",l);
l++;
k=0; }
else
{printf(" ");
k=1;
}}
printf("\n");
}
getch();
}
