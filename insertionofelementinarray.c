#include<iostream>
#include<conio.h>
void main()
{
int a[6],loc,element;
for(i=0;i<=5;i++)
{
cin>>a[i];
}
cout<<"enter the element and location";
cin>>loc>>element;
for(i=loc;i<=6;i++)
{
a[i+1]=a[i];}
a[loc]=element;
for(i=0;i<=6;i++)
{
cout<a[i];
}
getch();

}

