/* EXERCICIO 1 - A */

#include<stdio.h>
#include<conio.h>


main()
{
  int a,b,*pa,*pb;
  a=b=5;
  pa=&a;	  
  *pa=10;
  pb=&b;
  *pb+=*pa;
  ++*pa;
  printf("%d, %d",a,b);
  getch();
}
