#include <conio.h>
#include <stdio.h>
main()
{
      int aux,i;
      printf (" Multiplicação utilizando FOR\n");
      
      aux=2;
      for (i = 0; i <= 499; i=i+2)
      {
         printf("%d + %d =",i,aux);
         aux = i+aux;
         printf(" %d\n",aux);
      }
      
      i=0;aux=2;
      printf (" Multiplicação utilizando DO\n");
      
      do
      {
         printf("%d + %d =",i,aux);
         aux = i+aux;
         printf(" %d\n",aux);
         i=i+2;
      }
      while (i <= 499);

      i=0;aux=2;
      printf (" Multiplicação utilizando WHILE\n");
      
      while (i <= 499)
      {
         printf("%d + %d =",i,aux);
         aux = i+aux;
         printf(" %d\n",aux);
         i=i+2;
      }

getch();  
      
}
