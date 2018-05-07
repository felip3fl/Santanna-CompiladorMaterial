#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>                
#include <conio.h>
#include <ctype.h>

#define MAXNAME 50
#define MAXNUM 50
#define MAXTOKEN 50

char adiante; 
char token[MAXTOKEN+1];

/* protótipos */        

void nextChar();        
void getName(char *name);                
void getNum(char *num);  
void scan(char *token);
void espaco();
int isdigito1(char adiante);
int isalpha1(char adiante);

    /* PROGRAMA PRINCIPAL */
int main()
{             
 
printf("Digite o texto e finaliza pelo caractere ENTER: ");          
  nextChar();
  do {
     scan(token);                        
     printf("%s\n", token);                        
   } while (token[0] != '\n'); 

   printf("\n\nAperte algo para continuar ");
   getch();                
   return 0;
}    

/* lê próximo caracter da entrada */      
void nextChar()           
   {
   adiante = getchar();
   }       


/* recebe o nome de um identificador */        
void getName(char *name)           
  {
   int i;                     
   
  if(!isalpha1(adiante)) 
            printf("\n expected Name");           
  for (i = 0; (isalpha1(adiante) || isdigito1(adiante)) && i < MAXNAME; i++) 
    {
    name[i] = toupper(adiante);
    nextChar();        
    }
  name[i] = '\0';  
  nextChar();                 
   espaco();
  }
  
/* recebe um número inteiro */        
void getNum(char *num)        
  {
  int i;
  
  if (!isdigito1(adiante))
           printf("\n expected Integer"); 
  for (i = 0; isdigito1(adiante) && i < MAXNUM; i++) 
    {
    num[i] = adiante;
    nextChar(); 
    }
  num[i] = '\0';
 espaco();
  }

//divisao em tokens
void scan(char *token)
 {
 
 if (isalpha1(adiante))
   getName(token);
 else if (isdigito1(adiante)) 
      getNum(token);
      else 
        {
        token[0] = adiante;
        token[1] = '\0';
        nextChar();
        }
      espaco(); 
   }
  
/* pula caracteres de espaço */   
void espaco()     
 {                
 while (adiante == ' ' || adiante == '\t')                                
 nextChar();        
 } 
 
int isdigito1(char adiante)     
 {                
 if(adiante == '0' || adiante == '1' || adiante == '2' || adiante == '3' || adiante == '4' || adiante == '5' || adiante == '6' || adiante == '7' 
 || adiante == '8' || adiante == '9') 
    return 1;
 else 
    return 0;
 }


int isalpha1(char adiante)
{
	 int erro=0;
	 char estado = 'A';

		if((toupper(adiante) >='A') && (toupper(adiante) <= 'Z'))
		  estado = 'B';
		   else if( (estado == 'B') && ( ((toupper(adiante) >='A') && (toupper(adiante) <= 'Z')) || ((adiante >='0') && (adiante <= '9'))))
		       estado = 'B';
			else  erro = 1;
   if( (!erro) && (estado == 'B'))
       return 1;
   else 
      return 0;
}
