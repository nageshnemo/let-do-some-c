#include<stdio.h>
#include<conio.h>
void main(){
int i,j;
char k;


for(i=1;i<=23;i++)
{
k=9;
for(j=1;j<=45;j++)
{

if(j<=8-i || j>=6+i )

{

printf("%c",k);
j<7?k++:k--;





}
else
{


printf(" ");
if(j==7)
   k--;

}
}
printf("\n");
}





}
