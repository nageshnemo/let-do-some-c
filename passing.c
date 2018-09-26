#include<iostream.h>
#include<conio.h>
using namespace std;

class box
{int l,b,h;
public:
    void get();
    void show();
    int compvol(box);
};
void box::get()
{

    cout<<enter l,b,h;
    cin>>l>>b>>h;

}
void box::show()
{
    cout<<l<<" "<<b<<" "<<h<<endl;

}
int box::compvol(box p)
{
    int x,y;
    x=l*b*h;
    y=p.l*p.b*p.h;

}
int main()
{

    box b1,b2;
    b1.get();
    b2.get();
    b1.show();
    b2.show();

    return 0;
}
