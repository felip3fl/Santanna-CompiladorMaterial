#include <stdio.h>
#include <conio.h>
main()
{
      int a,b,aux;
      printf ("Digite A e B \n");
      scanf ("%d %d",&a,&b);
      aux=a; a=b; b=aux;
      printf ("Valores Trocados: %d %d",&a,&b);
      getch();
}
