#include <stdio.h>
#include <conio.h>
main()
{
      int c,l,a;
      printf ("Digite a altura da caixa: ");
      scanf ("%d", &a);
      printf ("Digite a largura da caixa: ");
      scanf ("%d", &l);
      printf ("Digite a comprimento da caixa: ");
      scanf ("%d", &c);
      printf ("O volume da caixa é: %d",(a*l*c));
      getch();
}

