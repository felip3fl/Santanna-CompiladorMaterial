/* EXERCICIO 2 */

#include<conio.h>
#include<stdio.h>
main()
{
   int v[10],aux,i;
   aux=i=0;
   while (i<=9){     
   i++;
   printf ("Digite o %d* valor: ",i);
   scanf ("%d",&v[i]);
   }
   i=0;
   do
   {
         i++;
         if ((v[i]%2)==0)
         printf ("%d,",v[i]);
   }
   while (i<=9);
   getch();
}
