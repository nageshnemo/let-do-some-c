#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=7;i++)
{
for(j=1;j<=7;j++)
{
if( ((i==5||i==3) &&(j>=3&&j<=5)) || ( j==1||j==7||i==1||i==7 ) || ((i==4) &&(j==3 ||j==5))  )

printf("*");
else
printf(" ");



}
printf("\n");}















}
