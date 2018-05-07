/* EXERCICIO 7 */

#include <conio.h>
#include <stdio.h>
main()
{
    int m[5][6],soma,cont1,cont2; /* Cont1: Linha   Cont2: Coluna */    
    soma = 0;
    for (cont1 = 0; cont1 <= 4; cont1++)
    {
       for (cont2 = 0; cont2 <= 5; cont2++)
       {
           printf ("Digite o %d terno da %d linha = ",(cont2 +1),(cont1 + 1));
           scanf ("%d",&m[cont1][cont2]);
           
           if ((m[cont1][cont2]%2)==0)
              soma+= m[cont1][cont2];
       }    
    }  
    printf ("Soma de todos elementos pares: %d \n",soma);
    getch();
}
