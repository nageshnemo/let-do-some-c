#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=3;j++)
{

if  (  (j==1) || ((i==1||i==3||i==5)&&(j==2||j==3) ) )
printf("*");
else
printf(" ");

}
printf("\n");


}
getch();
}
