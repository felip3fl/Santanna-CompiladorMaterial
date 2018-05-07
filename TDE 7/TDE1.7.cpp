#include<conio.h>
#include<stdio.h>
main()
{
    int valor,aux,aux2,i,j;  
    
/*----------------------------------------------------------------*/ 
    j=1; aux2=0;
    for (j=10;j>=1;j=j-1)
    {            
    printf ("\n\n[       FOR        ]\n\n[ Falta %d Valores ]",j);    
    printf ("\n\nDigite Valor: ");
    valor=aux=i=1;
    scanf ("%d",&valor);
    for (i = 1; i <= valor; i=i+1)
    {
        printf ("%d x ",i);
        aux=aux*i;
        aux2=aux+aux2;
    }
    printf ("\nFatorial: %d",aux);
    }
    printf ("\n[ SOMA ] %d",aux2);

/*----------------------------------------------------------------*/


    j=10; aux2=0;
    do
    {
    printf ("\n\n[        DO        ]\n\n[ Falta %d Valores ]",j);    
    printf ("\n\nDigite Valor: ");
    valor=aux=i=1;
    scanf ("%d",&valor);  
    do
    {
        printf ("%d x ",i);
        aux=aux*i;
        aux2=aux2+aux;
        i++;
    }
    while(i<=valor);
    j=j-1;
    printf ("\nFatorial: %d",aux);
    }
    while (j>=1);
    printf ("\n[ SOMA ] %d",aux2);

/*--------------------------------------------------------------------*/
    
    j=10; aux2=0;
    while (j>=1)
    {
    printf ("\n\n[       WHILE      ]\n\n[ Falta %d Valores ]",j);    
    printf ("\n\nDigite Valor: ");
    valor=aux=i=1;
    scanf ("%d",&valor);  
    while(i<=valor)
    {
        printf ("%d x ",i);
        aux=aux*i;
        aux2=aux2+aux;
         i++;
    }
    j=j-1;
    printf ("\nFatorial: %d",aux);
    }
    printf ("\n[ SOMA ] %d",aux2);
    getch();  
}
