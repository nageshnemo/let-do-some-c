#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;

for(i=1;i<=5;i++)
{ printf(" ");
for(j=1;j<=5;j++)
{
if(  j==1||j==5 ||(j==2&&i==2)|| (j==3 &&i==3 )||(j==4&&i==4)    )
printf("*");
else
printf(" ");
}
printf("\n");


}

printf("\n");

for(i=1;i<=5;i++)
{
printf("     ");
for(j=1;j<=4;j++)
{
    printf(" ");
if((j==1 || j==4) || ((j==2 || j==3)&&(i==1 ||i==3)))
printf("*");
else
printf(" ");

}
printf(" \n");

}





for(i=1;i<=5;i++)
{ printf("\t       ");
for(j=1;j<=4;j++)
{
if( (j==1)||(i==5 &&j!=4)||   ((j==3)&&(i==3||i==4) ) || (i==3&&j==4)   )
printf("*");
else
printf(" ");
}
printf("\n");


}




for(i=1;i<=5;i++)
{printf("\t\t      ");
for(j=1;j<=3;j++)
{

if  (  (j==1) || ((i==1||i==3||i==5)&&(j==2||j==3) ) )
printf("*");
else
printf(" ");

}
printf("\n");


}



for(i=1;i<=5;i++)
{ printf("\t\t\t  ");
for(j=1;j<=4;j++)
{
if  ( (i==1||i==3||i==5) || (j==1&&i==2)   || (j==4&&i==4)    )
printf("*");
else
printf(" ");
}
printf("\n");
}



for(i=1;i<=5;i++)
{
    printf("\t\t\t\t");
for(j=1;j<=4;j++)
{
if(j==1||j==4||i==3)
printf("*");
else
printf(" ");
}
printf("\n");
}

getch();



}

