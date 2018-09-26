#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a1[5]="a";
char a2[5]="b";
char a3[5];
char a4[5]="b";
char a5[5]="ba";
cout<<a1<<endl<<a2<<endl;

strcat(a2,a1);
strcpy(a3,a2);
cout<<a3;
strcat(a3,a4);
strcpy(a4,a3);
cout<<endl<<a4;
strcat(a5,a4);

cout<<endl<<a5;


getch();
return 1;
}














