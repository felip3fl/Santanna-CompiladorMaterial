#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

char token;
char PReser[ ] = {'[',']',';','a'};
char texto[256],textoReser[256],textoIdent[256],textoSim[256];

   int i,j,k,l,total,n,flag,tam;

// protótipos
int L();
int S();   
int anali_sinta();
int anali_lex();
int nextChar();
int anali_seman();

//programa Principal
int main()
{
    anali_lex();
  printf("\n ");          
    i=-1;
    anali_sinta();
  printf("\n ");          
    if(token == '$') 
       anali_seman();

   printf("\n\nAperte algo para continuar ");
   getch();                
}

//Analisador lexico
int anali_lex()

{             
    total = strlen(PReser);    
    printf("\nDigite o texto terminado por $ e finaliza pelo caractere ENTER: ");          
    gets(texto);
    tam=strlen(texto);
    
    i=0; 
    if(texto[i] != '\0')
    {
    while(texto[i] != '$')
    {
       flag = 0;
       for(j=0;j<total;j++)
         if(texto[i] == PReser[j]) flag=1;
       if(flag==1) textoSim[i] = texto[i];
         else textoSim[i] = '!';
     i=i+1;
     }
   textoSim[i] = '$';
   printf("\n Os caracteres do Vetor Final Misturado SAO: ");          
   for(n=0;n<tam;n++) printf("%c",textoSim[n]);
   getch();
     }

     i=0;
    if(texto[i] != '\0')
    {
    while(texto[i] != '$')
    {
       for(j=0;j<total;j++)
         {
         if(texto[i] == PReser[j])
            {
             textoReser[k] = texto[i];
             k=k+1;
             }
        }
     i=i+1;
     }

     i=0;
     while(texto[i] != '$')
     {
       flag =0;
       for(j=0;j<total;j++)
         {
         if(texto[i] == PReser[j]) 
             flag=1;
          }
         if(flag == 0) 
             {
             textoIdent[l] = texto[i];
             l=l+1;
             }
        i++;
}     
     
     printf("\n Os caracteres RESERVADOS SAO: ");          
       for(n=0;n<k;n++) printf("%c",textoReser[n]);

      printf("\n Os caracteres NAO RESERVADOS SAO: ");          
       for(n=0;n<l;n++) printf("%c",textoIdent[n]);
     
    }
    else
       printf("\n NAO HA DADOS ");
    getch();
}

//Analisador sintatico
int anali_sinta()
{             
    token=nextChar();
    if(S())
       if(token == '$') printf("\nSucesso ");
       else printf("\nERRO ");
    else printf("\nERRO ");

   return 0;
}    

//Analisador semantico
int anali_seman()
{             

  printf("\n ANALISE SEMANTICA   : ");          
  for(n=0;n<tam;n++) 
     printf("\nMOV AX, %d",textoSim[n]);
  getch();                
   return 0;
}    

int nextChar()           
   {
   i++;
   return(textoSim[i]);
   }       

//Marcacao de ponto para retrocesso
int S()
  {
  if(token == 'a')
   {
   token=nextChar();
   return 1;
   }
  else if(token == '[')
         {
         token=nextChar();
         if(L())     
          {
            if(token == ']')
            {
            token=nextChar();
            return 1;
            }
            else return 0;
         }
        else return 0;
        }
   else return 0; 
}

//Arvorde de derivaçao
int L()
  {
  if(S())
    if(token == ';')
       {
       token=nextChar();
       if(L())     
          return 1;
       else return 0;
       }
   else return 1; 
 else return 0; 
}
