#include<stdio.h>
#include<conio.h>
void main()
{

int i,j,k,l=1,x;
x:
for(i=1;i<=4;i++)
{
    k=1;
for(j=1;j<=7;j++)
{
if(j>=5-i && j<=3+i&&k)
{
printf("%d",l);
l++;
k=0;
}
else
{printf(" ");
k=1;
}
}





printf("\n");
}
goto x;

}

