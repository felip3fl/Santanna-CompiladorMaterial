/* EXERCICIO 3 */

#include<conio.h>
#include<stdio.h>

void proc (int x);
main()
{
  int valor;	  
  printf ("Digite um valor: ");
  scanf ("%d",&valor);
  proc (valor);
  getch();
}

void proc (int x)
{
  if (x%2==0)
  	printf ("Esse valor e PAR");
  else
    printf ("Esse valor e IMPAR");
}

