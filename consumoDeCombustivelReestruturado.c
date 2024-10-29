#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// constantes.h
#define PRECO_GASOLINA 5.70
#define PRECO_ETANOL 3.50
#define PRECO_DIESEL 4.20
#define PRECO_GNV 2.30
#define EFICIENCIA_GASOLINA 12
#define EFICIENCIA_ETANOL 10
#define EFICIENCIA_DIESEL 15
#define EFICIENCIA_GNV 20

// funcoes.h
void calcular_consumo(float preco, float eficiencia, int distancia);
void menu();

int main() {
	
	setlocale(LC_ALL, "");
	int escolha;
	
	do {
		menu();
		scanf("%d", &escolha);
		
		switch (escolha) {
			case 1: {
				calcular_consumo(PRECO_GASOLINA, EFICIENCIA_GASOLINA);
				break;
			}
			case 2: {
				calcular_consumo(PRECO_ETANOL, EFICIENCIA_ETANOL);
				break;
			}
			case 3: {
				calcular_consumo(PRECO_DIESSEL, EFICIENCIA_DIESEL);
				break;
			}
			case 4: {
				calcular_consumo(PRECO_GNV, EFICIENCIA_GNV);
				break;
			}
			case 5: {
				printf("Encerrando...\n");
				break;
			default:
				printf("Opção não encontrada!\n");
			} 
		} while (escolha != 5);
		
		system("pause");
		return 0;
	}
}

void calcular_consumo(float preco, float eficiencia) {
	int distancia;
	printf("Qual a distância percorrida pelo veículo? ");
	scanf("%d", &distancia);
	
	float consumo = (float)distancia / eficiencia;
	float custo = consumo * preco;
	
	printf("Consumo total: %.1f litros\n", consumo);
	printf("Custo estimado: R$ %.2f\n", custo);
}

void menu() {
	printf("Qual combustível você usa no seu veículo?\n");
	printf("1 - Gasolina\n");
	printf("2 - Etanol\n");
	printf("3 - Diesel\n");
	printf("4 - GNV\n");
	printf("5 - Sair\n");
}
