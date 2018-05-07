#include<string.h>
#include<conio.h>
#include<stdio.h>
main()
{
    char nome[10];
    printf("Digite nome: "); 
    scanf("%s",nome);
    printf("\nNome em Maiusculo: %s",strupr(nome));
    printf("\nNome em Minusculo: %s",strlwr(nome));    
    getch();
}
