/* EXERCICIO 2 - B */

#include<stdio.h>
#include<conio.h>


main()
{
  int a,b,*pa,*pb;
  a=b=10;
  pa=&a;	  
  *pa+=10;
  pb=&b;
  *pb+=b;
  *pa=*pa+5;
  printf("%d, %d",a,b);
  getch();
}
