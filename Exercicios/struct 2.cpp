#include <stdio.h>
#include <conio.h>

int main()
{

struct NomeCompleto {
char Primeiro[15];
char Meio[15];
char Sobrenome[15];
};

struct Pessoa {
struct NomeCompleto Nome;
int idade;
};

struct Pessoa Drausio;

printf("Digite seu primeiro nome: ");
scanf("%s", &Drausio.Nome.Primeiro);
printf("Digite seu nome do meio: ");
scanf("%s", &Drausio.Nome.Meio);
printf("Digite seu sobrenome: ");
scanf("%s", &Drausio.Nome.Sobrenome);
printf("Digite sua idade: ");
scanf("%d", &Drausio.idade);

printf("Nome completo: %s %s %s\nIdade: %d anos\n", Drausio.Nome.Primeiro, Drausio.Nome.Meio, Drausio.Nome.Sobrenome, Drausio.idade);
getch();
}
