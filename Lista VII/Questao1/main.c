/*Dado o programa abaixo,
fornecer os valores que serão exibidos
quando o mesmo for executado:*/
#include <stdio.h>
int main ()
{
int A, B, C, i;
A = 0;
B = 10;
C = B - A;
i = 1;
while (i <= 10)
{
if (C > A)
{
C = C - 2;
i++;
}
else
{
i += 2;
B = C % i;
}
A = A + i;
printf ("A = %d ;", A);
printf ("B = %d ;", B);
printf ("C = %d ;", C);
printf ("i =%d ;\n", i);
}
}
/* Resposta: A = 2; B = 10; C = 8; i = 2;
             A = 5; B = 10; C = 6; i = 3;
             A = 9; B = 10; C = 4; i = 4;
             A = 15; B = 4; C = 4; i = 6;
             A = 23; B = 4; C = 4; i = 8;
             A = 33; B = 4; C = 4; i = 10;
             A = 45; B = 4; C = 4; i = 12;
*/
