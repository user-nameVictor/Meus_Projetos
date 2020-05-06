#include <stdio.h>
#include <conio.h>
#include <windows.h>

char nome[255];
char tecla;
FILE *pont_arq;

void lerDados() {
	
	pont_arq = fopen("arquivo.txt", "r");
	if(pont_arq == NULL) {
		printf("Dados do usuario indisponiveis\n");
	} else {
		fgets(nome, 31, pont_arq);
		fclose(pont_arq);
	}
	
}

void catalogo() {
	if(pont_arq == NULL) {
		printf("Anonimo, selecione sua categoria favorita\n1 - Acao\n2 - Aventura\n3 - Ficcao\n4 - Terror\n5 - Comedia\n6 - Animado\n7 - Documentario\n");
	} else {
		printf("Ei, %s", nome);
		printf("\nSelecione sua categoria favorita\n1 - Acao\n2 - Aventura\n3 - Ficcao\n4 - Terror\n5 - Comedia\n6 - Animado\n7 - Documentario\n\n");
	}
	do {
	tecla = getch();
	switch(tecla) {
		case 49:
			printf("Mad Max: Estrada da Furia - (2015) IMDb: 8.1/10\n");
			printf("MATRIX - IMDb: 8.7/10\n");
			printf("Duro De Matar - IMDb: 5.3/10\n");
			printf("O Exterminador do Futuro - IMDb: 6.3/10\n");
			system("PAUSE");
			exit(0);
			break;
		case 50:
			printf("Divergente - IMDb: 6.7/10\n");
			printf("Jurassic Park (1993) - IMDb: 8.1/10\n");
			printf("Indiana Jones e os Cacadores da Arca Perdida - IMDb: 8.4/10\n");
			printf("Indiana Jones e a Ultima Cruzada - IMDb: 7.3/10\n");
			system("PAUSE");
			exit(0);
			break;
		case 51:
			printf("A Chegada - IMDb: 7.9/10\n");
			printf("Interestelar - IMDb: 8.6/10\n");
			printf("Solaris (1972) - IMDb: 8.1/10\n");
			printf("Perdido em Marte - IMDb: 8.0/10\n");
			system("PAUSE");
			exit(0);
			break;
		case 52:
			printf("O Iluminado (1980) - IMDb: 8.4/10\n");
			printf("O Silêncio dos Inocentes - IMDb: 8.6/10\n");
			printf("Halloween (1978) - IMDb: 7.8/10\n");
			printf("O Chamado (2002) - IMDb: 7.1/10\n");
			system("PAUSE");
			exit(0);
			break;
		case 53:
			printf("As Branquelas - IMDb: 5.6/10\n");
			printf("Anjos da Lei - IMDb: 7.2/10\n");
			printf("Borat - O Segundo Melhor Repórter do Glorioso País Cazaquistão Viaja à América - IMDb: 7.3/10\n");
			printf("Apertem os Cintos... O Piloto Sumiu! - IMDb: 7.7/10\n");
			system("PAUSE");
			exit(0);
			break;
		case 54:
			printf("WALL·E - IMDb: 8.4/10\n");
			printf("Os Incríveis - IMDb: 8.0/10\n");
			printf("Ratatouille - IMDb: 8.0/10\n");
			printf("O Rei Leão (1994) - IMDb: 8.5/10\n");
			system("PAUSE");
			exit(0);
			break;
		case 55:
			printf("Maçonaria: segredos revelados (2017) - IMDb: 5.6/10\n");
			printf("Take Your Pills (2018) - IMDb: 6.4/10\n");
			printf("Minimalism: A Documentary About the Important Things (2015) - IMDb: 6.7/10\n");
			printf("Por Dentro das Prisões Mais Severas do Mundo (2016) - IMDb: 6.8/10\n");
			system("PAUSE");
			exit(0);
			break;
		default:
			printf("\nOpcao incorreta\nEscolha apenas as correspondentes abaixo\n1 - Acao\n2 - Aventura\n3 - Ficcao\n4 - Terror\n5 - Comedia\n6 - Animado\n7 - Documentario\n");
			break;		 
	}
} while(tecla != 49 && 50 && 51 && 52 && 53 && 54 && 55);
}

main() {
	lerDados();
	catalogo();
}
