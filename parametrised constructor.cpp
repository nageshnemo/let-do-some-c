
#include<iostream.h>
#include<conio.h>
void area (int,int=0);
int main()
{
int choice;
cout<<"select a figure"<<endl;
cout<<"1 square"<<endl<<"2 rectangle";
cin>>choice;
switch(choice)
{
case 1:
    int s;
    cout<<"enter side";
    cin>>s;
    area(s)
    break;

    case 2:
        int l,b;
        cout<<"enter l,b of rectangle";
        cin>>l>>b;
        break;
    default:
        cout<<"wrong choice";

}
getch();
return 0;
}
void area(int side1,int side2)

if(side2==0)
{
    cout<<"area of squareis "<<side1*side1;

}

else
{

    cout<<"area of rectangle is "<<side1*side2;
}

