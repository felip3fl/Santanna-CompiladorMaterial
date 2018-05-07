/* EXERCICIO 2 */

#include<conio.h>
#include<stdio.h>

main(){
  int i=0, aux, soma=0, valor;
  printf ("Quantos numeros voce pretende digitar? ");
  scanf ("%d",&aux);
  while (i < aux)
  {
  i++;
  printf ("Digite o %d* valor: ",i);
  scanf ("%d",&valor);
  soma+= valor;
  }
  printf ("Soma: %d",soma);
  getch();
}
