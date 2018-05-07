/* EXERCICIO 4 */

#include<conio.h>
#include<stdio.h>

void soma (int x, int y, int z){
printf ("\n%d ao quadrado: %d",x,x*x);
printf ("\n%d ao quadrado: %d",y,y*y);
printf ("\n%d ao quadrado: %d",z,z*z);
printf ("\nSOMA: %d: ",(x*x)+(y*y)+(z*z));
}

main(){
  int a,b,c;
  printf ("Digite 3 valores: \n");
  scanf ("%d %d %d",&a,&b,&c);
  soma(a,b,c);
  getch();
}
