#include <conio.h>
#include <stdio.h>
main()
{
     int aux,i,v[10];
     aux=i=0;
     for(i=0;i<=9;i++)
     {
        printf ("Digite o %d* valor: ",i+1);
        scanf ("%d",&v[i]);
        aux=aux+v[i];
        if (i!=0)
           printf ("[ Digitado: %d ]\n[ Anterior: %d ]\n[ Diferenca: %d ]\n\n",v[i],v[i-1],(v[i]-v[i-1]));                        
     }
     printf ("A media entre os 10 numeros lido e: %d",(aux/10));
     getch();
}
