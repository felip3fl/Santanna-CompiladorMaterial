#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>                
#include <conio.h>
#include <ctype.h>

#define MAXNAME 50
#define MAXNUM 50
#define MAXTOKEN 50

char atual; 
char token[MAXTOKEN+1];
/* protótipos */        

void inicializar();                
void ProxChar();        
void erro(char *fmt, ...); 
void fatal(char *fmt, ...);        
void esperado(char *fmt, ...);
void verificar(char c);
void getName(char *name);                
void getNum(char *num);  
void emit(char *fmt, ...);       
void scan(char *token);
void espaco();


    /* PROGRAMA PRINCIPAL */
int main()
{             
 
 inicializar();                        
 do {
   scan(token);                        
   printf("%s\n", token);                        
   } while (token[0] != '\n'); 

   printf("\n\nAperte algo para continuar ");
   getch();                
   return 0;
}    

//inicialização do compilador 

void inicializar()       
  {                
  ProxChar();
  }        

/* lê próximo caracter da entrada */      
void ProxChar()           
   {
   atual = getchar();
   }       

/* exibe uma mensagem de erro formatada */
void erro(char *fmt, ...)       
   {
   va_list args;                       
   fputs("Error: ", stderr); 
   va_start(args, fmt); 
   vfprintf(stderr, fmt, args);        
   va_end(args);       
   fputc('\n', stderr);
   }    

/* exibe uma mensagem de erro formatada e sai */                

void fatal(char *fmt, ...)  
      {                
      va_list args;               
      fputs("Error: ",stderr);                    
     va_start(args, fmt);    
     vfprintf(stderr, fmt,args);                
     va_end(args);               
     fputc('\n', stderr);                    
    exit(1);                
    } 

/* alerta sobre alguma entrada esperada */ 
void esperado(char *fmt, ...)    
    {                       
     va_list args;              
     fputs("Error: ", stderr);                    
     va_start(args, fmt);    
     vfprintf(stderr, fmt, args);        
     va_end(args);                     
     fputs(" expected!\n",stderr);                    
   getch();                
  
    exit(1);
   }       

/* verifica se entrada combina com o esperado */ 
void verificar(char c)               
   {
   if (atual != c)                       
      esperado("'%c'", c);       
   ProxChar();
   }                

/* recebe o nome de um identificador */        
void getName(char *name)           
  {
   int i;                     
   
  if(!isalpha(atual)) 
      esperado("Name");           
  for (i = 0; isalnum(atual) && i < MAXNAME; i++) 
    {
    name[i] = toupper(atual);
    ProxChar();        
    }
  name[i] = '\0';  
  ProxChar();                 
  espaco();
  }
  
/* recebe um número inteiro */        
void getNum(char *num)        
  {
  int i;
  
  if (!isdigit(atual))
     esperado("Integer"); 
  for (i = 0; isdigit(atual) && i < MAXNUM; i++) 
    {
    num[i] = atual;
    ProxChar(); 
    }
  num[i] = '\0';
  espaco();
  }

//divisao em tokens
void scan(char *token)
 {
 
 if (isalpha(atual))
   getName(token);
 else if (isdigit(atual)) 
      getNum(token);
      else 
        {
        token[0] = atual;
        token[1] = '\0';
        ProxChar();
        }
 espaco(); 
   }

 
/*emite uma instrução seguida por uma nova linha */       
 void emit(char *fmt, ...)  
  {             
  va_list args;            
  putchar('\t');  
  va_start(args, fmt);        
  vprintf(fmt, args); 
  va_end(args);               
  putchar('\n');     
  }
  
/* pula caracteres de espaço */   
void espaco()     
 {                
 while (atual == ' ' || atual == '\t')                                
 ProxChar();        
 } 
 
