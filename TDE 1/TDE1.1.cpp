#include <conio.h>
#include <stdio.h>
main()
{
      int a,i,aux;
      printf (" Multiplicação utilizando FOR\n");
      
      aux=2;
      for (i = 1; i <= 100; i=i+1)
      {
         printf("%d + %d =",i,aux);
         aux = i+aux;
         printf(" %d\n",aux);
      }
      
      i=1;aux=2;
      printf (" Multiplicação utilizando DO\n");
      
      do
      {
         printf("%d + %d =",i,aux);
         aux = i+aux;
         printf(" %d\n",aux);
         i=i+1;
      }
      while (i <= 100);

      i=1;aux=2;
      printf (" Multiplicação utilizando WHILE\n");
      
      while (i <= 100)
      {
         printf("%d + %d =",i,aux);
         aux = i+aux;
         printf(" %d\n",aux);
         i=i+1;
      }

getch();  
      
}
