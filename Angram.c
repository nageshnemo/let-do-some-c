#include <stdio.h>


int check_anagram(char [], char []);

int main()
{
   char a[50], b[50];
   int x;
   scanf("%s %s",a,b);

   x= check_anagram(a, b);

   if (x == 1)
      printf("YES");
   else
      printf("NO");

   return 0;
}

int check_anagram(char a[], char b[])
{
   int first[26] = {0}, second[26] = {0}, c = 0;



   while (a[c] != '\0')
   {
      first[a[c]-'a']++;
      c++;
   }

   c = 0;

   while (b[c] != '\0')
   {
      second[b[c]-'a']++;
      c++;
   }


   for (c = 0; c < 26; c++)
   {
      if (first[c] != second[c])
         return 0;
   }

   return 1;
}
