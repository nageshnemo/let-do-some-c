#include<stdio.h>
#include<conio.h>
void main()
{


int i,j,k=0,l=6;
		for(i=1;i<=10;i++){
			if(i<=5){
				k++;
				l--;
			}
			else{
				if(i==6){
				k;
				l;}
			else{
				k--;
				l++;
			}
			}
			for(j=1;j<=9;j++){
				if(j<=6-k||j>=4+k)
					printf("%d",l);


                                         else
				         printf(" ");
			}
			printf("\n");


		}
		getch();
	}



