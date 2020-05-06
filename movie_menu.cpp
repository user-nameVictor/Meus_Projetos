#include <stdio.h>
#include <conio.c>
#include <locale.h>
#include <windows.h>
#include <string.h>


char nome[31];
char email[101];
char telefone[15];
char tecla;
int anoDeNascimento = 0;
int idade = 0;
int anoAtual = 0;

void inserirTelefone() {
	printf("\nPor favor, insira seu telefone\n");
	scanf("%s", telefone);
	while(strlen(telefone) < 13) {
		printf("Por favor, insira seu telefone corretamente\nNo formato DDD(xx)9xxxx-xxxx\n");
		scanf("%s", telefone);
	}
	
	do {
		do{
			printf("Deseja confirmar seu telefone? S - sim, N - nao\n");
			tecla = getch();
		} while(tecla != 115 && 110);
	
		if(tecla == 115) {
			printf("\nOK\n");
			break;
		} else if(tecla == 110) {
			printf("\nInsira novamente seu telefone\n");
			scanf("%s", telefone);
			while(strlen(telefone) < 13) {
				printf("Por favor, insira seu email corretamente\nNo formato DDD(xx)9xxxx-xxxx\n");
				scanf("%s", telefone);
			}
		}
	} while(tecla == 110);
}

void inserirEmail() {
	
	printf("\nPor favor, insira seu email\nEx: meuemail@exemplo.com\n");
	scanf("%s", email);
	while(strlen(email) <= 6) {
		printf("Por favor, insira seu email corretamente\n");
		scanf("%s", email);
	}
	
	do {
		do{
			printf("Deseja confirmar seu email? S - sim, N - nao\n");
			tecla = getch();
		} while(tecla != 115 && 110);
	
		if(tecla == 115) {
			printf("\nOK\n");
			break;
		} else if(tecla == 110) {
			printf("\nInsira novamente seu email\n");
			scanf("%s", email);
			while(strlen(email) <= 6) {
				printf("Por favor, insira seu email corretamente\nEx: meuemail@exemplo.com");
				scanf("%s", email);
			}
		}
	} while(tecla == 110);
}


void inserirNome() {
	
	printf("\nPor favor, insira seu nome\n");
	scanf("%s", nome);
	
	while(strlen(nome) <= 3) {
		printf("Por favor, insira seu nome corretamente\n");
		scanf("%s", nome);
	}
	
	do {
		do{
			printf("Deseja confirmar seu nome? S - sim, N - nao\n");
			tecla = getch();
		} while(tecla != 115 && 110);
	
		if(tecla == 115) {
			printf("\nOK\n");
			break;
		} else if(tecla == 110) {
			printf("\nInsira novamente seu nome\n");
			scanf("%s", nome);
			while(strlen(nome) <= 3) {
				printf("Por favor, insira seu nome corretamente\n");
				scanf("%s", nome);
				}
		}
	} while(tecla == 110);
}

void calculaIdade() {
	
	setlocale(LC_ALL, "");
	printf("\nPor favor, digite seu ano de nascimento\n");
	scanf("%d", &anoDeNascimento);
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
	anoAtual = str_t.wYear;
	idade = anoAtual - anoDeNascimento;
	
	if(idade < 18) {
		textcolor(RED);
		cprintf("\nDesculpe! Mas voce nao possui idade suficiente para acessar nosso catalogo!");
		exit(0);
	} else {
		printf("Sua idade é %i\n", idade);
	}
}

void saudacao () {
	setlocale(LC_ALL, "");
	printf("Seja bem-vindo ao MovieMenu!\nPor favor, pressione ENTER para começar.\n");
	tecla = getch();
	
		while(tecla != 13) {
			printf("Por favor, digite a tecla correspondente corretamente (ENTER)\n");
			tecla = getch();
		}
	}
	

main () {
	saudacao();
	calculaIdade();
	inserirNome();
	inserirEmail();
	inserirTelefone();
	printf("\nOlá %s, seus dados declarados são:\nIdade: %i\nEmail: %s\nTelefone: %s", nome, idade, email, telefone);
	printf("\n\nDeseja salvá-los?\nS - sim, N - Nao");
	tecla = getch();
	if(tecla == 115) {
		FILE*pont_arq;
		pont_arq = fopen("arquivo.txt", "w");
		fprintf(pont_arq, "%s \n%i \n%s \n%s", nome, idade, email, telefone);
		fclose (pont_arq);
		printf("\n\nArquivo salvo com sucesso.\nPressione qualquer tecla para ir ao catalogo.\n");
		system("PAUSE");
		system("start catalogo_moviemenu.exe");
	} else if (tecla == 110) {
		printf("\nPressione qualquer tecla para ir ao catalogo.\n");
		system("PAUSE");
		system("start catalogo_moviemenu.exe");
	}
	
}
