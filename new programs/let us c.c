#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l=1;
for(i=1;i<=4;i++)
{
for(j=1;j<=7;j++)
{k=1;
if(j>=5-i && j<=4+i )
{
    printf("*");
//printf("%d",l);
l++;
k=0;
}
else{
printf(" ");
k=1;
}
printf("\n");
}
}}
