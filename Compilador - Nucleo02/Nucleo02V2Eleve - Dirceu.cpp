//        Nucleo2V2 

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>                
#include <conio.h>
#include <ctype.h>

char atual; /* O caracter lido atual*/              

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
void termo();
void adiciona();
void substrae();
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
void termo()
  {
  emit("MOV AX, %c", getNum());
  }

/* reconhece e traduz uma adição */
void adiciona()
 {
 verificar('+');
 termo();
 emit("ADD AX, BX");
 }
 
/* reconhece e traduz uma subtração */ 
void substrae()
  {
  verificar('-');
  termo();
  emit("SUB AX, BX"); 
  emit("NEG AX"); 
  }

/* reconhece e traduz uma expressão */
void expressao()
  { 
  termo();
  emit("MOV BX, AX");
  switch(atual)
   {
   case '+': adiciona();
             break;
   case '-': substrae();
             break; 
   default:  esperado("AddOp");
             break;                     
   }                
 }
