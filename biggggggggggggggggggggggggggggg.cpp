#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;


#include<windows.h>
void gotoxy(int x,int y)
{
 COORD c;
    c.X=x;
    c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}




int main()
{
int i;
for(i=1;i<=5;i++)
gotoxy(60,i);

{


cout<<"\n     # ";
cout<<"\n    ## ";
cout<<"\n     #    ";
cout<<"\n     #   ";
cout<<"\n     # ";
cout<<"\n     # ";
cout<<"\n     # ";
cout<<"\n     #";
cout<<"\n   ##### ";

}


cout<<" \n    # ";
cout<<" \n    # ";
cout<<" \n    #    #  ";
cout<<" \n    ######";
cout<<" \n         # ";
cout<<" \n         # ";
cout<<" \n         # ";
cout<<" \n         #";





getch();

}
