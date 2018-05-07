#include <conio.h>
#include <stdio.h>
main()
{
      int aux,i,valor;
      aux=0;
      printf ("FOR\nDigite 10 Valores:\n");
      for (i = 1; i <= 10; i=i+1)
      {
             scanf ("%d",&valor);
             aux=aux+valor;
      }
      printf ("Soma: %d\nMedia: %d",aux,aux/10);
      
      printf ("\n\nDO\nDigite 10 Valores:\n");
      
      aux=i=0;
      do
      {
           scanf("%d",&valor);
           aux=aux+valor;  
           i++;
      }
      while(i <= 10);
      printf ("Soma: %d\nMedia: %d",aux,aux/10);
      
      
      printf ("\n\nWHILW\nDigite 10 valores:\n");
      aux=i=0;
      while (i <= 10)
      {
          scanf("%d",&valor);
          aux=aux+valor;
          i++; 
      }
      printf ("Soma: %d\nMedia: %d",aux,aux/10);
      
getch();  
      
}
