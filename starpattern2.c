#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        i>=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            if(j>=1 && j<=k)

                printf("*");
                else
                    printf(" ");

        }
        printf("\n");
    }
}

