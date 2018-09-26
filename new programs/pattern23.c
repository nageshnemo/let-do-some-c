#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows;
printf("enter no of rows");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{
for(j=1;j<=rows;j++)
{
if(j<=i)
{
if(j%2!=0)
printf("1");
else
printf("0");
}

}
printf("\n");
}
getch();
}
