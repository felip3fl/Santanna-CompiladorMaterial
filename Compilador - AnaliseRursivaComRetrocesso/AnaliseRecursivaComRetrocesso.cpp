/* OBJETIVO (15/05/2012)

*Professor - É uma tentativa de construir uma arvore de derivação a parti das folhas produzindo uma derivação mais a direita ao reverso.
*Livro - A análise redutiva de uma sentença (ou programa) pode ser vista como a tentativa de
constmir uma árvore de derivação a partir das folhas, produzindo uma denvação mais à
direita ao reverso. A denominação redutiva refere-se ao processo que sofre a sentença de
entrada. a qual é reduzida até ser atingido o símbolo inicial da gramática (raiz da árvore de
derivação). Dá-se o nome de red~rçáo à operação de substituição do lado direito de uma
produção pelo nãc-terminal correspondente (lado esquerdo).
Pagina 40 do livro (Imprementação de linguagen  de Programação)
Exemplo 3.7 - Analizador recursivo com Retrocesso
Analizador sintatico
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char token;

//prototipos
int nextChar(); //Indice de funções ou procedimentos
int L();
int S();//Simbolo não terminal
// w = { aa, [a, a], a; } palavras, o sintatito reconhece se a pavalra reconhece ou nao, palavra inteira
//palavra existe pelo analizador lexico!


//programa Principal
int main()
{             
    printf("Digite o texto e finaliza pelo caractere ENTER: ");          
    token=nextChar(); 	//Ele consome caracter da frase até ela acabar 
			//Ler o primeiro simbolo da sua frase, simbilo inicial (mada para S)
     if(S())
       if(token == '$') printf("\nSucesso "); //Se ele conseguir chegar no final da palavra, sucesso!
       else printf("\nERRO "); 
    else printf("\nERRO "); //Se ele não conseguir achar o simbolo inicial, aparece erro!

   printf("\n\nAperte algo para continuar ");
   getch();                
   return 0;
}    


/* lê próximo caracter da entrada */      
int nextChar()           
   {
   getchar();
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
