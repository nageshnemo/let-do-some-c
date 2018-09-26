#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;

for(i=1;i<=28;i++)
{ for(j=1;j<=16;j++)
   {if(j<=6-i || j>=4+i )


   printf("*");
   else
   printf(" ");

}
printf("\n");
}
getch();
}
