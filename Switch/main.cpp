#include <conio.h>
#include <stdio.h>
main()
{
      int idade;
      printf ("Digite sua Idade: \n");
      scanf ("%d", &idade);
      switch (idade)
      {
             case 1:
             case 2:
             case 3:
             case 4: printf ("Idade Invalida"); break;
             case 5:
             case 6:
             case 7: printf("Infatil A"); break;
             case 8:
             case 9:
             case 10: printf ("Infatil B"); break;
             case 11:
             case 12:
             case 13: printf ("Juvenil A"); break;
             case 14:
             case 15:
             case 16:
             case 17: printf ("Juvenil B"); break;
             default:
                     printf ("Adulto");
      }
      getch();
}
