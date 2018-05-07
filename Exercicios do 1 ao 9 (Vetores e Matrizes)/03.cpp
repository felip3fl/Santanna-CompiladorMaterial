/* EXERCICIO 3 */

#include <conio.h>
#include <stdio.h>
main()
{
   int v[6],i,aux;
   i=aux=0;
   while(i<=6)     
   {
   i++;
   printf ("Digite o %d* valor: ",i);
   scanf ("%d",&v[i]);
   }
   
   i=0;
   do
   {
         i++;       
         if ((v[i]%2)!=0)
         {
         printf("%d,",v[i]);
         aux+=v[i];
         }
   }
   while(i<=6);
   printf ("\n\nSoma total: %d",aux);
   getch();
   
}
