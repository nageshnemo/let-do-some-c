#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{

                  if(    (i==6)||(j==6)  ||((j==1)&& (i==1||i==2||i==3||i==10)) || ((j==10)&&(i==1||i==9||i==10||i==2||i==3||i==7))          )
printf("*");
else
printf(" ");

}
printf(" \n");

}



}





