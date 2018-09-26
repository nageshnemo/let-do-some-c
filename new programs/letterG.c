#include<stdio.h>
#include<conio.h>
void main()
{

int i,j;



for(i=1;i<=5;i++)
{
for(j=1;j<=4;j++)
{
if( (j==1)||(i==5 &&j!=4)||   ((j==3)&&(i==3||i==4) ) || (i==3&&j==4)   )
printf("*");
else
printf(" ");
}
printf("\n");


}

