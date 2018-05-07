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
   
  if(!isalpha(adiante)) 
            printf("\n expected Name");           
  for (i = 0; isalnum(adiante) && i < MAXNAME; i++) 
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
  
  if (!isdigit(adiante))
           printf("\n expected Integer"); 
  for (i = 0; isdigit(adiante) && i < MAXNUM; i++) 
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
 
 if (isalpha(adiante))
   getName(token);
 else if (isdigit(adiante)) 
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
 
