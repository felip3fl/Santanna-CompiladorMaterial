#include<conio.h>
#include<stdio.h>
main()
{
      int aux,i,valor;
      i=aux=valor=1;
      printf ("FOR\n\nDigite um Valor: ");
      scanf("%d",&valor);
      if (valor==1)
         printf("1,1");
      else
         for (i=1;i<=valor;i=i+aux)
         {
           aux=i-aux;
           if (aux!=0)
           printf ("%d,",aux);
         }
         printf("%d",valor);
          
/*-------------------------------------------------*/          
      i=aux=valor=1;
      printf ("\n\n\nDO\n\nDigite um Valor: ");
      scanf("%d",&valor);
      if (valor==1)
        printf("1,1");
      else
        do
        {
          i=i+aux;        
          aux=i-aux;
          if (aux!=0)
          printf ("%d,",aux);
        }
        while (i<=valor);
        printf("%d",valor);
 
 /*-------------------------------------------------*/            
      i=aux=valor=1;  
      printf ("\n\n\nWHILE\n\nDigite um Valor: ");
      scanf("%d",&valor);
      if (valor==1)
         printf("1,1");
      else
         while (i<=valor)
         {
            i=i+aux;
            aux=i-aux;
            if (aux!=0)
            printf ("%d,",aux);
         }
         printf("%d",valor);
          
      getch();
}
