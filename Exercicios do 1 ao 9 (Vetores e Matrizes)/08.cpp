/* EXERCICIO 8 */

#include <conio.h>
#include <stdio.h>
main()
{
    int m[7][4],maior,menor,cont1,cont2; /* Cont1: Linha   Cont2: Coluna */    
    maior=menor = 0;
    for (cont1 = 0; cont1 <= 6; cont1++)
    {
       for (cont2 = 0; cont2 <= 3; cont2++)
       {
           printf ("Digite o %d terno da %d linha = ",(cont2 +1),(cont1 + 1));
           scanf ("%d",&m[cont1][cont2]);
           
           if (menor==0)
              menor = m[cont1][cont2];
              
           if (m[cont1][cont2] > maior)
              maior = m[cont1][cont2];
              
           if (m[cont1][cont2] < menor)
              menor = m[cont1][cont2]; 
       }    
    }  
    printf ("Maior numero: %d \n",maior);
    printf ("Menor numero: %d \n",menor);
    getch();
}
