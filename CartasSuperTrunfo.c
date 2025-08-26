#include <stdio.h>

int main(){
	
	//Estrutura da carta
	
	char Estado[2];
	char Codigo_da_Carta[6] = "01";
	char Nome_da_Cidade[50];
	int Populacao;
	float Area;
	float PIB;
	int Numero_de_pontos_Turisticos = 10;
	
	//Instrução para o usuário
	
	printf("Cadastro de cartas do Super Trunfo\n");
	printf("\n");
	
	//Leitura da primeira carta
	printf("Carta 1:\n");
	
	printf("\n");
	
	printf("Estado: %c\n",'A');
	printf("Codigo da carta: A01 \n");
	printf("Nome da cidade: Toritama\n");
	printf("Populacao: %d.\n", 75000);
	printf("Area: %.2f\n", 1452.11 );
	printf("PIB: %f\n", 699.28);
	printf("Numeros de pontos turisticos: %d\n",10);
	
	
	
	// Leitura da segunda carta
	
	printf("Carta 2:\n");
	printf("\n");
	
	
	printf("Estado: %c\n",'B');
	printf("Codigo da carta: B02 \n");
	printf("Nome da cidade: Caruaru\n");
	printf("Populacao: %d.\n", 95000);
	printf("Area: %.2f\n", 4587.78 );
	printf("PIB: %f\n", 990.88);
	printf("Numeros de pontos turisticos: %d\n",30);
	
	}
	
