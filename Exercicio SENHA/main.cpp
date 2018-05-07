#include<conio.h>
#include<stdio.h>
main()
{
    int senha;
    senha=1234;
    do
    {
    printf ("Senha: ");     
    scanf ("%d",&senha);
    switch (senha)
    {
    case 1234: printf("Senha Correta!\n\n");break;
    default: printf ("Senha Incorreta!\n\n");
    }
    }
    while (senha!=1234);
    getch();
}
