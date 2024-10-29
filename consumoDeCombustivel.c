#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int buffer_cleaner() {
	int c;
	while ((c =getchar()) != '\n' && c !=EOF);
	return 0;
}

int main() {
	
	setlocale(LC_ALL, "");
	
	int escolha, distancia;
	
	// Preços dos Combustíveis
	float preco_gasolina = 5.70;
	float preco_etanol = 3.50;
	float preco_diesel = 4.20;
	float preco_gnv = 2.30;
	
	// Eficiência dos Combustíveis (km/l)
    float eficiencia_gasolina = 12;
    float eficiencia_etanol = 10;
    float eficiencia_diesel = 15;
    float eficiencia_gnv = 20;
	
	// Pergunta do combustível utilizado
	printf("Qual combustível você usa no seu veículo?\n");
	printf("1 - Gasolina\n");
	printf("2 - Etanol\n");
	printf("3 - Diesel\n");
	printf("4 - GNV\n");
	printf("5 - Sair\n");
	
	scanf("%d", &escolha);
	buffer_cleaner();
	
	
	switch (escolha) {
		case 1: {
			printf("Qual a distância percorrida pelo veículo? ");
			scanf("%d", &distancia);
			buffer_cleaner();
			
			float consumo = (float)distancia / eficiencia_gasolina;
			float custo = consumo * preco_gasolina;
			
			printf("Com gasolina, você teve um consumo total de %.1f litros\n", consumo);
			printf("Custo estimado: R$ %.2f\n", custo);
			break;
		}
		
		case 2: {
			printf("Qual a distância percorrida pelo veículo? ");
			scanf("%d", &distancia);
			buffer_cleaner();
			
			float consumo = (float)distancia / eficiencia_etanol;
			float custo = consumo * preco_etanol;
			
			printf("Com etanol, você teve um consumo total de %.1f litros\n", consumo);
			printf("Custo estimado: R$ %.2f\n", custo);
			break;
		}
		
		case 3: {
			printf("Qual a distância percorrida pelo veículo? ");
			scanf("%d", &distancia);
			buffer_cleaner();
			
			float consumo = (float)distancia / eficiencia_diesel;
			float custo = consumo * preco_diesel;
			
			printf("Com diesel, você teve um consumo total de %.1f litros\n", consumo);
			printf("Custo estimado: R$ %.2f\n", custo);
			break;
		}
		
		case 4: {
			printf("Qual a distância percorida pelo veículo? ");
			scanf("%d", &distancia);
			buffer_cleaner();
			
			float consumo = (float)distancia / eficiencia_gnv;
			float custo = consumo * preco_gnv;
			
			printf("Com GNV, você teve um consumo total de %.1f litros\n", consumo);
			printf("Custo estimado: R$ %.2f\n", custo);
			break;
		}
		
		case 5: {
			printf("Encerrando...\n");
			break;
		}
		
		default: {
			printf("Opção não encontrada\n");
			break;
		}
	}
	
	system("pause");
	buffer_cleaner();
	return 0;
}
