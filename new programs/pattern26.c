#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char c='A';
for(i=1;i<=4;i++)
{

for(j=1;j<=4;j++)
{
if(j<=i)
{printf("%c",c);
if(c!='A'||'B'||'C')
    c--;
}
else
printf(" ");
}
printf("\n");
c++;
}


}
