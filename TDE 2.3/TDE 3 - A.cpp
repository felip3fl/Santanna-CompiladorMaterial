/* Exercicio 3 - A */

#include<conio.h>
#include<stdio.h>


main(){
  int opcao,i, cont=0;
  float valor;
  	   
  struct carro{
    char marca[15];
    int ano;
    char cor[10];
    float preco;
  }vetcarros[20];
  

  
  while (opcao != 0){
    printf ("\nDigite uma opcao:\n\n");
    printf ("0) Encerar o programa\n");
    printf ("1) Inserir novo veiculo (Falta %d carros para preencher)\n",(20-cont));
    printf ("2) Procurar carros com certo valor\n");
    scanf ("%d",&opcao);
    switch (opcao){
  	  case 1: 
        cont++;   
  	    printf ("Marca: ");
        if(vetcarros[cont].marca != "") fflush(stdin);   	    
        gets(vetcarros[cont].marca);
  	    printf ("Ano: ");
  	    scanf ("%d",&vetcarros[cont].ano);
  	    printf ("Cor: ");
  	    scanf ("%s",&vetcarros[cont].cor); 	  
  	    printf ("Preco: ");		  	  
  	    scanf ("%f",&vetcarros[cont].preco);  	  
        break;
		
			 
  	  case 2: 
  	    printf("Digite um preco: ");
  	    scanf ("%f",&valor);
  	    for (i=1;i<=cont;i++)
        {
	  	  if (vetcarros[i].preco <= valor){
	  	  printf ("\n\nMarca: %s", vetcarros[i].marca);
	  	  printf ("\nAno: %d", vetcarros[i].ano);
	  	  printf ("\nCor: %s", vetcarros[i].cor);
	  	  printf ("\nPreco: %.3f\n\n", vetcarros[i].preco);
		  }
		  else printf ("\nNenhum encontrado\n\n");
		}
        break;
  	  
  	  
  	  default: printf ("\n[ ERRO ] Opcao invalida\n\n");
    }
  }
}
