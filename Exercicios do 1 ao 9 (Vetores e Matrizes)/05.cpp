/* EXERCICIO 5 */

#include<conio.h>
#include<stdio.h>
main()
{
   /*Faca um progrma que leia 10 valores de um vetor
   ordene e exiba os valores do vetor em ordem crecente*/   
   int v[9],aux,i,j;
   i=aux=0;
   while(i<=9){
    printf ("Digite o %d* valor: ",i+1);
    scanf("%d",&v[i]);
    i++;
   }   
   i=0; 
   while(i<=9){
     for (j=0;j<=9;j++){
       if (v[j] > v[j+1]){
         aux = v[j];
         v[j] = v[j+1];
         v[j+1] = aux;
       }
     }
   i++;
   }
   for (i=0;i<=9;i++)
     printf ("%d,",v[i]);	   
   
   getch();
}
