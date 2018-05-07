/* EXERCICIO 1 */

#include<conio.h>
#include<stdio.h>


main()
{
  int aux, i, v[10];
  aux=i=0;
  for (i=0;i<=9;i++)
  {
    printf ("Digite o %dº valor: ",i+1);
    scanf("%d",&v[i]);
    aux = aux + v[i];
  }
  printf("\n\nA media entre os 10 valores lidos e: %d",(aux/10));
  
  for (i=0;i<=9;i++)
    printf ("\nA diferenca entre o %d e a media e %d",v[i],(v[i]-(aux/10)));
    
  getch();
}
