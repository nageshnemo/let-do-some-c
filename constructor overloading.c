#include<iostream.h>
#include<conio.h>
class box{
int l,b,h;
public:
    box();
    box(int);
    box(int,int,int);
    void show();
    };
    box::box()
    {
    cout<<"enter l,b,h";
    cin>>l>>b>>h;
    }
    box::box(ints)
    {
        l=b=h=s;
        }



    box::box(inti,intj,intk)
    {

        l=i;
        b=j;
        h=k;
    }
    void box::show()
    {
    cout<<l<<"  "<<b<<"  "<<h;
    cout<<endl;
    }
    int main()
    {
        box b1;
        box b2(5,7,9);
        box b3(10)
        b1.show();
        b2.show();
        b3.show();
        getch();
        return 0;
    }

