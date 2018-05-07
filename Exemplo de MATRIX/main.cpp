#include <conio.h>
#include <stdio.h>
main()
{
    int m[5][5],aux,cont1,cont2; /* Cont1: Linha   Cont2: Coluna */    
    aux = 0;
    for (cont1 = 0; cont1 <= 4; cont1++)
    {
       for (cont2 = 0; cont2 <= 4; cont2++)
       {
           printf ("Digite o %d terno da %d linha = ",(cont2 +1),(cont1 + 1));
           scanf ("%d",&m[cont1][cont2]);
           aux+= m[cont1][cont2];
       }    
    }  
    printf ("Soma Total: %d \n",aux);
    getch();
}
