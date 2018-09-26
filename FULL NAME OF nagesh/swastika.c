#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(   (i==3||j==3) ||  ((j==1)&&(i==1||i==2||i==5)) || ((j==5)&&(i==1||i==4||i==5))||  (j==2 && i==5) ||(j==4&&i==1)        )
printf("*");
else
printf(" ");
}
printf("\n");


}
getch();



}
