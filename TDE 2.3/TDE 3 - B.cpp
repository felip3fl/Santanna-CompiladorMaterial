/* Exercicio 3 - B */

#include<conio.h>
#include<stdio.h>


main(){
  int opcao,i, cont=0;
  float soma=0;
  char aux;
  	   
  struct produto{
    char nome[15];
    char setor;
    int quantidade;
    float preco;
  }estoque[100];
  

  
  while (opcao != 0){
    printf ("\nDigite uma opcao:\n\n");
    printf ("0) Encerar o programa\n");
    printf ("1) Inserir novo produto (Falta %d produtos para preencher)\n",100-cont);
    printf ("2) Setores\n");
    printf ("3) Capital Atual\n");
    scanf ("%d",&opcao);
    switch (opcao){
  	  case 1: 
        cont++;   
  	    printf ("Nome: "); 
            if(estoque[cont].nome != "") fflush(stdin);   	    
            gets(estoque[cont].nome);
  	    printf ("Setor: ");
            if(estoque[cont].setor != "") fflush(stdin);   	    
            gets(estoque[cont].setor);  	    
  	    printf ("Quantidade: ");
  	    scanf ("%d",&estoque[cont].quantidade); 	  
  	    printf ("Preco (Por unidade): ");		  	  
  	    scanf ("%f",&estoque[cont].preco); 
		estoque[cont].preco *= estoque[cont].quantidade; 
		soma += estoque[cont].preco;   	  
        break;
		
			 
  	  case 2: 
  	    printf("Digite o setor: ");
  	    scanf ("%s",&aux);
  	      for (i=1;i<=cont;i++)
  	      {
  	        if (aux == estoque[i].setor){
			  printf ("\nNome: %s",estoque[i].nome);   		  
			  printf ("\nQuantidade: %d",estoque[i].quantidade);
			  printf ("\nPreco (Unidade): %.2f",estoque[i].preco / estoque[i].quantidade);
			  printf ("\nPreco (Total): %.2f\n\n",estoque[i].preco);
		    }
		  }
        break;
        
        case 3:
		printf ("\nCapital Atual: %.2f",soma);
	    break;
  	  
  	  
  	  default: printf ("\n[ ERRO ] Opcao invalida\n\n");
    }
  }
}
