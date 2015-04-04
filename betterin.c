#include "stdio.h"
#include "conio.h"
#define CR 13       /* Defines a CR con un valor de 13 */
#define LF 10       /* Defines a LF con un valor de 13*/

int main()
{
char c;

   printf("Ingresar los caracteres.\n");

   do {
      scanf("%c",&c);                    /* Obtienes el caracter */
      putchar(c);                     /* Muestra el caracter */
      if (c == CR) putchar(LF);       
                                        
   } while (c != 'X');

   printf("\nFIn del programa.\n");
return 0;
}
