#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
char str[50];
int i,n=1;
cout<<"enter the string :";
gets(str);
for(i=0;i<strlen(str);i++)
{
    if(i==0)
{      cout<<str[i];}
              if(str[i]==' ')
                {  str[i]='.';
                   cout<<str[i];
                    cout<<str[i+1];
                     n=i;
                }}n+=2;
while(str[n]!='\0')
{
cout<<str[n];
n++;
}
getch();

}
