#include<string.h>
#include<conio.h>
#include<stdio.h>
main()
{
   char nome[10];
   char sobre[10];
   printf ("Digite seu Nome: ");
   scanf ("%s",nome);
   printf ("Digite seu Sobre-Nome: ");
   scanf ("%s",sobre);
   printf ("Nome completo: %s",strcat (nome, sobre));
   printf ("\n\nCaracteres: %d",strlen (nome));
   getch();
   
}
