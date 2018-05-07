/* EXERCICIO 1 */

#include<conio.h>
#include<stdio.h>

void som(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

main()
{
   int x,y,opcao;
   while (opcao != 5)
     {
     printf ("\n\nDigite 1* valor: ");
     scanf ("%d",&x);
     printf ("Digite 2* valor: ");
     scanf ("%d",&y);
     printf ("Voce deseja fazer:\n") ;     
     printf ("(1) Soma\n");
     printf ("(2) Subtrair\n");
     printf ("(3) Multiplicar\n");
     printf ("(4) Dividir\n");
     printf ("(5) Encerar o programa\n");
     scanf("%d\n\n",&opcao);
     switch(opcao)
       {
       case 1: som(x,y);break;
       case 2: sub(x,y);break;
       case 3: mul(x,y);break;
       case 4: div(x,y);break;
       case 5: ;break;
       default: printf ("\nOpcao Invalida!");
       }
  
   }   
}

void som (int a, int b)
{
printf("Soma: %d + %d = %d",a,b,a+b);	 
}

void sub (int a, int b)
{
printf("Subtração: %d - %d = %d",a,b,a-b);
}

void mul (int a, int b)
{
printf("Multiplicação: %d x %d = %d",a,b,a*b);
}

void div (int a, int b)
{
printf("Divisão: %d / %d = %d",a,b,a/b);	 
}
