#include<conio.h>
#include<stdio.h>
main()
{
    int valor,aux,i;  
/*---------------------------------------------------*/      
    valor=aux=i=1;
    printf ("\n\nFOR\nDigite Valor: ");
    scanf ("%d",&valor);    
    for (i=1;i<=valor;i++)
    {
        printf ("%d x ",i);
        aux=aux*i;
    }
    
    printf ("\nFatorial: %d",aux);

/*---------------------------------------------------*/      

    valor=aux=i=1;
    printf ("\n\nDO\nDigite Valor: ");
    scanf ("%d",&valor);    
    do
    {
        printf ("%d x ",i);
        aux=aux*i;
        i++;
    }
    while(i<=valor);
    
    printf ("\nFatorial: %d",aux);

/*---------------------------------------------------*/      
    
    valor=aux=i=1;
    printf ("\n\nWHILE\nDigite Valor: ");
    scanf ("%d",&valor);
    while(i<=valor)
    {
        printf ("%d x ",i);
        aux=aux*i;
        i++;
    }
    printf ("\nFatorial: %d",aux);
    getch();  
}
