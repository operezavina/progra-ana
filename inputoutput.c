#include <stdio.h>
int main( )
{
   char str[100];
   int i;

   printf( "Enter name and age :");
   scanf("%s %d", str, &i);

   printf( "\nYou entered: %s %d \n\r", str, i);

   return 0;
}
