#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[6],i,l1,l2;
for(i=1;i<=6;i++)
{
cin>>a[i];
}
l1=a[1];
l2=a[1];
for(i=1;i<=6;i++)
{
if(l1<a[i])
{
        l2=l1;
l1=a[i];
       }
        else if(l2<a[i])
           l2=a[i];
           else
            continue;

           }
cout<<"1st largest number in an array is "<<l1<<"endl";
cout<<"2nd largest number is "<<l2;
getch();




}
