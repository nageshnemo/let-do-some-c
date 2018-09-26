#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k=0;
for(i=1;i<=4;i++)
{
for(j=1;j<=7;j++)
{
if(j>=5-i&&j<=3+i)
{
j<=4?k++:k--;
printf("%d",k);
}
else
printf(" ");



}
printf("\n");
}





}
