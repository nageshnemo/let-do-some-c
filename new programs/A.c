#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=4;j++)
{
    printf(" ");
if((j==1 || j==4) || ((j==2 || j==3)&&(i==1 ||i==3)))
printf("*");
else
printf(" ");

}
printf(" \n");

}



}





