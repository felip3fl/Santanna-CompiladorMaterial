/* Exercicio 3 - C */

#include<conio.h>
#include<stdio.h>


main(){
  int opcao, cont=0;
  float soma_metros;

  struct condominio{
    char nome[15];
    int numero;
    float area;
    int moradores;
  };
  
  struct condominio apartamento[40];
  
  while (opcao != 0){
    printf ("\nDigite uma opcao:\n\n");
    printf ("0) Encerar o programa\n");
    printf ("1) Inserir Apartamento (Falta %d apartamentos para preencher)\n",40-cont);
    printf ("2) Area total do condominio\n");
    scanf ("%d",&opcao);
    switch (opcao){
  	  case 1: 
        cont++;   
  	    printf ("Nome (do Responsavel): ");
        if (apartamento[cont].nome != "") fflush(stdin);
		gets(apartamento[cont].nome)  	    ;
  	    printf ("Numero (do Apartamento): ");
  	    scanf ("%d",&apartamento[cont].numero);
  	    printf ("Area (em m2): ");
  	    scanf ("%f",&apartamento[cont].area); 	  
  	      soma_metros += apartamento[cont].area;
  	    printf ("Numero de moradores: ");		  	  
  	    scanf ("%d",&apartamento[cont].moradores);    	  
        break;
		
			 
  	  case 2: 
  	    printf("\nArea Total: %.3f m2",soma_metros);
  	    break;
  	  
  	  
  	  default: printf ("\n[ ERRO ] Opcao invalida\n\n");
    }
  }
}
