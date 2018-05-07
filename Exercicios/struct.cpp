#include<conio.h>
#include<stdio.h>
main()
{
  struct medidas
  {
  float peso;
  float altura;
  };
  struct medidas antonio, jose;
  antonio.peso = 85.4;
  antonio.altura = 1.75 ;
  jose.peso = 70.8;
  jose.altura = 1.83;

  printf ("Peso de antonio: %f\n",antonio.peso);
  printf ("Altura de antonio: %f\n",antonio.altura);
  printf ("Peso de jose: %f\n",jose.peso);
  printf ("Altura de jose: %f\n",jose.altura);
  getch();
}
