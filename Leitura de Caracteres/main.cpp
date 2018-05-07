#include<stdio.h>
#include<conio.h>
main()
{
  char nome[10],sobrenome[20];
  
  printf ("Nome: ")  ;    
  scanf  ("%s",nome);
  
  printf ("\nSobrenome: ",nome);
  scanf  ("%s",sobrenome);    
  
  printf ("\n\nNome: %s %s",nome,sobrenome);
  getch();
}
