#include<stdio.h>
int main(){
	int saldo = 0;
	int opcao, valor;
	while(1){
	for(;;){
		system("cls");
			printf("\nSistema de gerenciamento de Caixa\n");
		printf("1. Ver Saldo\n");
		printf("2. Depositar\n");
		printf("3. Sacar\n");
		printf("0. Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d",&opcao);
		
		system("cls");
		
		switch (opcao){
			case 1:
				printf("Saldo Atual:%d\n",saldo);
				system ("pause");
				break;
			
			case 2:
			printf("Digite o Valor a Depositar:");
			scanf("%d",&valor);
			saldo += valor;
			printf("Deposito realizado com sucesso\n");
			system ("pause");
			break;
			
			case 3: 
				printf("Digite o Valor a Sacar:");
				scanf("%d",&valor);
			if(valor>saldo){
				printf("Saldo insuficiente\n");
			}	else{
				  saldo -= valor;
				  printf("Saque realizado com sucesso\n");
			}
			system("pause");
			break;
			
			case 0:
				printf("Saindo do sistema...\n");
				return 0;
				default:
				printf("Opcao invalida.... Tente Novamente.\n");
		}
		system ("pause");
		break;
		
		
	}
	
	
	
}
	}	
	
