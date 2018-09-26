#include<stdio.h>
int main(void)
{

int arr[5]={2,3,4,5,6};
int *p=arr;
int i;


for(i=0;i<=4;i++)
{
printf("%d",*(p+i));
//p++;

}
getch();



}
