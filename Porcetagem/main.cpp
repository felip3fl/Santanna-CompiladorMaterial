#include <stdio.h>
#include <conio.h>
main()
{
      int salario;
      printf ("Digite o Salario: ")     ;
      scanf ("%d", &salario);
      if (salario < 500)
         printf ("Ajuste de 15 porcento: %d",(((salario*15)/100)+salario));
      if (salario >= 500 && salario <= 1000)
         printf ("Ajuste de 10 porcento: %d",(((salario*10)/100)+salario));
      if (salario > 1000)
         printf ("Ajuste de 5 porcento: %d",(((salario*5)/100)+salario));
      getch();
}
