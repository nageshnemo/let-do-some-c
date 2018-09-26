#include<stdio.h>
#include<conio.h>
void main()
{
char c;
for(c=1;c<=255;c++)

{
printf("the ascii value of %d=%c\n",c,c);
if(c%25==0)
{

getch();
printf("\t");
}
}
getch();
}
