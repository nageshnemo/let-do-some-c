#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,r,x;

    printf("enter no of rows");
    scanf("%d",&r);
x:
for(i=1;i<=r;i++)
{
     for(j=1;j<=2*r-1;j++)
   {
       if(j>=i && j<=2*r-i )
          printf("*");
            else
              printf(" ");

               }
printf("\n");
goto x;
}

getch();
}
