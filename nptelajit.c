#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);

 if(a%15==0)
    printf("YES");
   else
        if( a%3==0 && ((a-3)%3==0 || (a-2)%2==1 ) || a%2==1 )

        printf("YES");
else
    printf("NO");

}
