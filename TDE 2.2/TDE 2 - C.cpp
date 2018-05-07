/* EXERCICIO 2 - C */

#include<conio.h>
#include<stdio.h>

void dias (int *pd,int *pm, int *pa){
   *pd = 360*(2010-(*pa))+(*pm*30)+*pd;
}

main(){
  int d,m,a;
  printf ("Digite o Dia que voce nasceu: ");
  scanf("%d",&d);
  printf ("Digite o Mes que voce nasceu: ");
  scanf("%d",&m);
  printf ("Digite o Ano que voce nasceu: ");
  scanf("%d",&a);

  dias (&d,&m,&a);
  printf ("Total de Dias: %d",d);
  getch();
}
