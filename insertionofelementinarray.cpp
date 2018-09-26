#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[6],loc,element,i;
for(i=0;i<=5;i++)
{
cin>>a[i];
}
cout<<"before entering any element";
for(i=0;i<=5;i++)
{
    cout<<a[i];
    cout<<endl;
}
cout<<"enter the location and element";
cin>>loc>>element;
for(i=loc;i<=6;i++)
{
    if(i>=loc)
a[i]=a[i+1];
}
a[loc]=element;



for(i=0;i<=5+1;i++)
{
cout<<a[i];
}
getch();

}

