#include<stdio.h>
#include<conio.h>
void main(){
int i,j;
char k;


for(i=1;i<=4;i++)
{
k='1';
for(j=1;j<=8;j++)
{

if(j>=5-i && j<=4+i )

{
    if(j==5)
        k='A';
printf("%c",k);
k++;





}
else
printf(" ");



}
printf("\n");
}





}
