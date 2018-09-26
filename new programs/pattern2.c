#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows ,couloumn;
printf("enter no of rows");
printf("enter no of couloumn");
scanf("%d %d",&rows,&couloumn);


for(i=1;i<=rows;i++)
{
for(j=1;j<=couloumn;j++)
 {

    if(j>=6-i&&j<=couloumn)
    printf("#");
    else
    printf(" ");

 }
 printf("\n");






 }
 getch();
}
