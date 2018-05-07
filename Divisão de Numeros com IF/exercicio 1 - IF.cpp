#include <stdio.h>
#include <conio.h>
main()
{
       int n1, n2, n3, n4;
       n1=n2=n3=n4=0;
       printf("Digite Nota de 1 a 4\n");
       scanf ("%d %d %d %d",&n1,&n2,&n3,&n4);
       if ((n1 % 2)==0)
          printf("%d e divisivel por 2\n",&n1);
       else
           if((n1 % 3)==0)
                  printf("%d e divisivel por 3\n",&n1);
       
       if ((n2 % 2)==0)
          printf("%d e divisivel por 2\n",&n2);
       else
           if((n2 % 3)==0)
                  printf("%d e divisivel por 3\n",&n2);
                  
       if ((n3 % 2)==0)
          printf("%d e divisivel por 2\n",&n3);
       else
           if((n3 % 3)==0)
                  printf("%d e divisivel por 3\n",&n3);
                  
       if ((n4 % 2)==0)
          printf("%d e divisivel por 2\n",&n4);
       else
           if((n4 % 3)==0)
                  printf("%d e divisivel por 3\n",&n4);
       getch();
}
           
