#include <stdio.h>
#include <conio.h>

int valor=0,y=0;

main(){
while (valor != 123){
printf ("Digite 1 um valor: (123 para sair)\n");
scanf ("%d",&valor);
y = 3;
printf ("\n[  %d x [%d] = %d  ]\n\n",valor,y,valor*y-1);
}
}
