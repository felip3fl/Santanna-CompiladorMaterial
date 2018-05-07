/* EXERCICIO 4 */

#include <conio.h>
#include <stdio.h>
main()
{
    int a[4],b[4],c[4],aux,i;
    aux=i=0;
    while(i<=4)     
    {   
       printf ("Digite o %d* valor do 1* vetor: ",i+1);
       scanf ("%d",&a[i]);
       printf ("Digite o %d* valor do 2* vetor: ",i+1);
       scanf ("%d",&b[i]);
       c[i]=a[i]+b[i];
       i++;          
    }
    for (i=0;i<=4;i++){
    printf("\n%d Valor do vetor C: %d",i+1,c[i]);    
    }
    getch();
}
