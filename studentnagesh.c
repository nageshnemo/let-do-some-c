#include<stdio.h>

struct student{
int rollno;
char name[30];
double marks;
};
/*
 int main()
 {
char ch;
 struct student s1;
 FILE *file;
 file =fopen("d:\\nagesh.txt","w+");
 if(file == NULL)
 {
 printf("errror in saving student data");
 return 1;
 }
 do{
 printf("enter rollno");
 scanf("%d",&s1.rollno);
 printf("enter name");
 scanf("%s",&s1.name);
 printf("enter marks");
 scanf("%lf",&s1.marks);

 fprintf(file,"%d \t %s \t %lf \n",s1.rollno,s1.name,s1.marks);
 printf("do you want to continue(y/n)\n");
ch = getch();
}while(ch == 'y' || ch =='Y');

*/

 int main()
 {
char ch;
char str[10];
int i;
 struct student s1;
 FILE *file;
 file =fopen("d:\\nagesh.txt","r");
 if(file == NULL)
 {
 printf("errror in reading student data");
 return 1;
 }
 do{
        printf("enter the name to search");
        scanf("%s",str);
    fscanf(file,"%d \t %s \t %lf \n",&s1.rollno,s1.name,&s1.marks);
    int i= strcmp(s1.name,str);
 if(i==0)
  {
    printf("your search is found/n ");
    printf("%d \t %s \t %lf \n",s1.rollno,s1.name,s1.marks);
  }
 printf("do you want to continue(y/n)\n");
ch = getch();
}while(ch == 'y' || ch =='Y');

 fclose(file);
 return 0;



 }
