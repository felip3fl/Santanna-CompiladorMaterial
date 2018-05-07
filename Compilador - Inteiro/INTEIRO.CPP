/*inteiro*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

	 int a,erro=0;
	 char estado = 'A';

int main()
{
	 system("cls");
	 printf("Digite o dado ");
	 while(((a=getchar()) != '\n') && (erro ==0))
		if((a>='0') && (a<= '9'))
				 estado = 'B' ;
			else
				 erro = 1;
		  if( (!erro) && (estado == 'B'))
			  printf("Foi lido um inteiro");
		  else
			  printf("Nao foi lido um inteiro");
			  getch();
}
