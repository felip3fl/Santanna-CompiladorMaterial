#include<conio.h>
#include<stdio.h>
main()
{
    float soma,v[5];
    int cont;
    soma=0;
    for(cont=0;cont<=4;cont++)
    {
        printf ("Digite o %d* numero: ",(cont+1));
        scanf ("%f", &v[cont]);
        soma+=v[cont];
    }
    printf ("A soma e %1f \n",soma);
    getch();
         
}
