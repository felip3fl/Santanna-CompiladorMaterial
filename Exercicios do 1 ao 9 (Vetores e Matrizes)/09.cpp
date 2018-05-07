/* EXERCICIO 9 NÃO COMPLETO */

#include <conio.h>
#include <stdio.h>
main()
{
    int m[3][3],aux,L,C,cont; /* Cont1: Linha   C: Coluna */    
    aux = 0;
    
    //Leitura de valores
    for (C = 0; C <= 2; C++)
    {
       for (L = 0; L <= 2; L++)
       {
           printf ("Coluna %d, Linha: %d = ",(C +1),(L + 1));
           scanf ("%d",&m[C][L]);
           
       }    
    }  
   
  //Ordena matrix  
for (cont = 0; cont <= 2; cont++)
{	  
  for (C = 0; C <= 1; C++)
    {
       for (L = 0; L <= 1; L++)
       {
            if (m[C][L] > m[C+1][L+1])
           {
               aux = m[C][L];
               m[C][L] = m[C][L+1];
               m[C][L+1] = aux;                                    
           }
       }    
    }
}


    //Imprimir todos os valores da matrix
    for (C = 0; C <= 2; C++)
    {
       for (L = 0; L <= 2; L++)
       {
           printf ("\nColuna %d, Linha: %d = %d",(C +1),(L + 1),m[C][L]);
       }    
    }
    getch();
}
