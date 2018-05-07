// codigo pede espaco depois de cada token (inclusive depois do ultimo token) e finaliza com Enter. 
//Precisa-se digitar um espaco depois de ENTER para obter o resultado
// mat [ num ] 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

char token[50];
//,ali[50];
char adiante;

//prototipos
char nextChar();
int decl();
int lista_id();
int tipo();
int l_id();
int simples();
int agregado();
int dimensao();

int erro =0;

//programa Principal
int main()
{             
 
    printf("Digite o texto e finaliza pelo caractere ENTER: ");          
    nextChar();
    decl();

   if(!erro) printf("\n sucesso");
   printf("\n\nAperte algo para continuar ");
   getch();                
   return 0;
}    

/* lê próximo caracter da entrada */  	
char nextChar()
{         	
	int i=0;
	
	adiante = getchar();
	do
  	{
   	token[i] = adiante;
   	i++;
   	adiante = getchar();   	
   	}while(adiante != ' ');//ele ser a palavra, nao letra por letra
	token[i] = '\0'; //todas as palavra em c acaba em \0
}	
 
//inicio da gramática
int decl()           
   {
   lista_id();
   if(strcmp(token,":") == 0)
     {
     nextChar();
     tipo();
     }
   else 
     {
     printf("\n erro declaracao");
     erro = 1;
     }
  }  
  
int lista_id()           
   {
   if(strcmp(token,"id") == 0)
     {
     nextChar();
     l_id();
     }
   else 
     {
     printf("\n erro lista_id");
     erro = 1;
     }
  }  
  
int l_id()           
   {
   if(strcmp(token,",") == 0)
     {
     nextChar();
     if(strcmp(token,"id") == 0)
       {
       nextChar();
       l_id();
       }
    else 
       {
       printf("\n erro l_id");
      erro = 1;
       }
      }
   else 
     return 1;
}  
     
int tipo()           
 {
   if((strcmp(token,"int") == 0) || (strcmp(token,"real") == 0))
     simples();
   else if((strcmp(token,"mat") == 0) || (strcmp(token,"conj") == 0))
           agregado();
        else 
          {
          printf("\n erro tipo");
          erro = 1;
         }
 }
     
int simples()           
 {
   if(strcmp(token,"int") == 0)
      nextChar();
   else 
       if(strcmp(token,"real") == 0) 
       nextChar();
       else 
          {
          printf("\n erro simples");
         erro = 1;
         }
 }

int agregado()           
 {
   if(strcmp(token,"mat") == 0)
     {
     nextChar();
     dimensao();
     simples();
     }
   else 
     {
     nextChar();
     simples();
     }
 }

int dimensao()           
 {
   if(strcmp(token,"[") == 0) 
     nextChar();
   if(strcmp(token,"num") == 0) 
     nextChar();
   if(strcmp(token,"]") == 0) 
     nextChar();
   else
   {
     printf("\n erro dimensao");
     erro = 1;
     }
 }
