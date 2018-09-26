   #include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,x,bill=0;
char choice;
cout<<"\t\t\t ||||welcome to NAGESH restaurant||||\n\n\n\n";
x:
cout<<"\n 1.TEA--Rs5:\n 2.Coffee--Rs10:\n 3.samosa---Rs15: \n 4.bill: \n 5.exit";
cout<<"\n\nenter the number what you want to take";
cin>>n;
switch(n)
{
case 1:
    {
      cout<<"thank you! for taking tea";
      bill+=5;
      break;

    }
case 2:
    {
        cout<<"thank you for taking coffee";
        bill+=10;
        break;

    }
case 3:
    {

     cout<<"thank you for taking samosa";
     bill+=15;
     break;
        }
case 4:
    {
        cout<<"your total bill is:"<<bill;
        break;
    }

case 5:
    {

        break;
    }
default :
    cout<<"wrong choice";

}
cout<<"\nwant to take another item y/n";
cin>>choice;
if(choice=='y'&&'Y')
{
    goto x;
}
else
    {cout<<"thank you for coming in our restaurant\n\n\n";
cout<<"your total bill is \nRS"<<bill;
    }





getch();




}
