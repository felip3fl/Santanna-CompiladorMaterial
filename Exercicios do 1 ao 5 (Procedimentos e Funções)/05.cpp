/* EXERCICIO 5 */

#include <conio.h>
#include <stdio.h>
#include<stdlib.h>

void felipe()
{
    int v[9],i;
    for(i=0;i<=9;i++)   
    {
       printf ("Digite o %d* valor: ",i+1);
       scanf ("%d",&v[i]);              
    }
    system("cls");
    i=0;
    while (i<=9)
    {
    i++;
    printf ("\nQuadrado: %d² = %d",v[i],v[i]^2);
    printf ("\nCubo: %d³ = %d",v[i],v[i]*v[i]*v[i]);
    }

}

main()
{
       felipe();
       getch();
}
