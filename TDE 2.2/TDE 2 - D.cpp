/* EXERCICIO 2 - D */

#include<stdio.h>
#include<conio.h>

void triangulo (float *px,float *py,float *pz){

  if (*px == *py && *px == *pz) printf ("Triangulo Equilatero");
  else if (*px == *py || *px == *pz) printf ("Triangulo Isosceles");
  else if (*px != *py && *px != *pz) printf ("Triangulo Excaleno");
}

 

main(){
  float x,y,z;
  printf ("Digite o valor de X: ");
  scanf ("%d",&x);
  printf ("Digite o valor de Y: ");
  scanf ("%d",&y);
  printf ("Digite o valor de Z: ");
  scanf ("%d",&z);    
  
 if ((x < (y+z))&&(y < (x+z))&&(z < (y+x))) triangulo (&x,&y,&z);
 else printf ("Valores Invalidos");
 getch();
}
