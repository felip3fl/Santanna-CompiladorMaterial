/* EXERCICIO 2 - A */


#include<stdio.h>
#include<conio.h>


void desconto5 (float *pvalor){
printf ("5");
*pvalor = *pvalor-((*pvalor*5)/100);
}


void desconto10 (float *pvalor){
printf ("10");
*pvalor = *pvalor-((*pvalor*10)/100);
}


void desconto15 (float *pvalor){
printf ("15");
*pvalor = *pvalor-((*pvalor*15)/100);
}


void desconto20 (float *pvalor){
printf ("20");
*pvalor = *pvalor-((*pvalor*20)/100);
}

 


main(){
float valor, soma=0; 
while (valor != 0){
printf ("\n\nDigite um valor: ");
scanf("%f",&valor);
soma+=valor;
}
printf ("\nTOTAL: R$ %.2f\n",soma);
if (soma < 50) desconto5 (&soma);
else if (soma >= 50 && soma <= 100) desconto10 (&soma);
else if (soma > 100 && soma <= 200) desconto15 (&soma);
else if (soma > 200) desconto20 (&soma);
printf (" porcento de desconto\nTOTAL A PAGAR: R$ %.2f",soma);
getch();
}

 
