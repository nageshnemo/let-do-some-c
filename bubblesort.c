
#include<stdio.h>
#include<conio.h>



void main()
{
int i,j,t;
int a[]={28,24,9,6};

for(i=0;i<=3;i++)
{

    for(;j<=3-i;j++)
    {

        if(a[i]>a[j])
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
        }


printf("\t%d",a[i]);}
getch();
}
