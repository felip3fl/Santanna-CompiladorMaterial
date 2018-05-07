/* Exercicio 2 - B */

#include<conio.h>
#include<stdio.h>

void rodizio (int *pplaca){
  if (*pplaca == 1 || *pplaca == 2) printf("Fim da Placa 1 e 2: Segunda");
  else if (*pplaca == 3 || *pplaca == 4) printf("Fim da Placa 3 e 4: Terça"); 
  else if (*pplaca == 5 || *pplaca == 6) printf("Fim da Placa 5 e 6: Quarta");
  else if (*pplaca == 7 || *pplaca == 8) printf("Fim da Placa 7 e 8: Quinta");
  else if (*pplaca == 9 || *pplaca == 0) printf("Fim da Placa 9 e 0: Sexta");
}


main(){
  int placa;
  printf ("Digite o ultimo numero da sua placa: ");
  scanf ("%d",&placa);
  rodizio (&placa);
  getch();
}
