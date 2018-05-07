#include <stdio.h>
#include <conio.h>
main()
{
   int mes;
   printf ("Digite um mes: ");
   scanf("%d", &mes);
   if (mes > 12)
      printf ("Mes Invalido");
   else
       if (mes == 1)
          printf ("Janeiro");
       if (mes == 2)
          printf ("Fevereirro");
       if (mes == 3)
          printf ("Março");
       if (mes == 4)
          printf ("Abril");
       if (mes == 5)
          printf ("Maio");
       if (mes == 6)
          printf ("Junho");
       if (mes == 7)
          printf ("Julho");
       if (mes == 8)
          printf ("Agosto");
       if (mes == 9)
          printf ("Setembro");
       if (mes == 10)
          printf ("Outubro");
       if (mes == 11)
          printf ("Novembro");
       if (mes == 12)
          printf ("Dezenbro");
   getch();
}
