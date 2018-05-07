//        NUCLEO
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <stdarg.h>                

char atual; /* O proximo caracter a ser lido  */              

/* protótipos */        

void inicializar();                
void ProxChar();        
void erro(char *fmt, ...); 
void fatal(char *fmt, ...);        
void esperado(char *fmt, ...);
void verificar(char c);

char getName();                
char getNum();  
void emit(char *fmt, ...);       
void expressao();

    /* PROGRAMA PRINCIPAL */
int main()
{             
   inicializar();  
   expressao();
   
   printf("\n\nAperte algo para continuar ");
   getch();                
   return 0;
}    

//inicializando o compilador 

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
   fputs("erro: ", stderr); 
   va_start(args, fmt); 
   vfprintf(stderr, fmt, args);        
   va_end(args);       
   fputc('\n', stderr);
   }    

/* exibe uma mensagem de erro formatada e sai */                

void fatal(char *fmt, ...)  
      {                
      va_list args;               
      fputs("erro: ",stderr);                    
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
     fputs("erro: ", stderr);                    
     va_start(args, fmt);    
     vfprintf(stderr, fmt, args);        
     va_end(args);                     
     fputs(" esperado!\n",stderr);                    
  // printf("\n\nAperte algo para continuar ");
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
char getName()           
  {
  char name;                       

  if(!isalpha(atual)) 
      esperado("Name");           
  name = toupper(atual);  
  ProxChar();                 
  return name;        
  }
  
/* recebe um número inteiro */        
 char getNum()       
 {
  char num; 

  if (!isdigit(atual))
     esperado("Integer");        
  num = atual;         
  ProxChar();          
  return num;   
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
  
  /* analisa e traduz uma expressão */        
void expressao()
  {
  emit("MOV AX, %c", getNum());
  }
