/* EXERCICIO 6 */

#include <conio.h>
#include <stdio.h>
main()
{
    int m[5][5],somat,soma1,soma2,cont1,cont2; /* Cont1: Linha   Cont2: Coluna */    
    somat=soma1=soma2 = 0;
    for (cont1 = 0; cont1 <= 4; cont1++)
    {
       for (cont2 = 0; cont2 <= 4; cont2++)
       {
           printf ("Digite o %d terno da %d linha = ",(cont2 +1),(cont1 + 1));
           scanf ("%d",&m[cont1][cont2]);
           somat+= m[cont1][cont2];
           
           if (cont1 == 3)
              soma1+= m[cont1][cont2];
              
           if (cont2 == 1)
              soma2+= m[cont1][cont2];
       }    
    }  
    printf ("Soma da linha 4: %d \n",soma1);
    printf ("Soma da coluna 2: %d \n",soma2);
    printf ("Soma de todos elementos: %d \n",somat);
    getch();
}
