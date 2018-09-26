#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k=7;
for(i=1;i<=7;i++)
{
    k=7;
k=k-i;
for(j=1;j<=7;j++)
{
if(j>=1&&j<=8-i)

{

printf("     %d",k--);

}
else
printf(" ");




}
printf("\n");

}





}
