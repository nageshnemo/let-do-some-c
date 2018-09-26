#include<stdio.h>
#include<math.h>
void main()
{
int i=111,r,s=0;
while(i!=0)
{

    r=i%10;
    s=s+pow(3,r);
    i=i/10;
}
if(i==s)
    printf("no is armstrong");
}
