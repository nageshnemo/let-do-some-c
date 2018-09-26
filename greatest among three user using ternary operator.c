#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;

    clrscr();
    printf("enter values of a,b ,c");
    scanf("%d %d %d ",a,b,c);
    (a>b)?((a>c)?printf("%d is greater",a);:printf("%d is greater,c");:(b>c)?(printf("%d is greater",b);:printf("%d is greater",c);)
    getch();
}
