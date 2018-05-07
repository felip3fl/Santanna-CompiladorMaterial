#include <stdio.h>
#include <conio.h>
main()
{
      int a,b,c;
      printf ("Digite 3 valores: \n");     
      scanf ("%d %d %d", &a, &b, &c);
      if (a < b)
         if (a < c)
            if (b < c)
               printf ("%d %d %d",a,b,c);
            else
               printf ("%d %d %d",a,c,b);
         else
            printf ("%d %d %d",c,a,b); 
      else
          if (b < c)   
             if (a < c)
                printf ("%d %d %d",b,a,c);
             else
                printf ("%d %d %d",b,c,a); 
          else
              printf ("%d %d %d",c,b,a);   
      getch();
}
