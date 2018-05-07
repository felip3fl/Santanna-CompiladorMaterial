#include <conio.h>
#include <stdio.h>
main()
{
      int a,i;
      printf ("Digite valor: ");
      scanf ("%d",&a);
      printf (" Multiplicação utilizando FOR\n");
      
      for (i = 0; i <= 10; i++)
      {
         printf("%d X %d = %d\n", i,a,i*a);
      }

      i=0;
      printf (" Multiplicação utilizando DO\n");
      
      do
      {
         printf("%d X %d = %d\n", i,a,i*a);
         i++;
      }
      while (i <= 10);

      i=0;
      printf (" Multiplicação utilizando WHILE\n");
      
      while (i <= 10)
      {
         printf("%d X %d = %d\n", i,a,i*a);
         i++;
      }

getch();  
      
}

/*

for (i = 0; ; i++){

    printf("numero %d\n", i);

    if (i == 5) break;

}*/
