#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	int cod, pag, op, end;
	int i,l,c,qtd,alt;
	float total_custo=0, total_venda=0, lucro;
	float cadastro[3][3];

	do{ 
		printf(">>>>> MENU DE OPÇÕES <<<<<<<<<\n");
		printf("(1) - ADICIONAR PRODUTO\n"); 
		printf("(2) - BUSCA DE PRODUTOS | ALTERAÇÃO DE PRODUTOS\n"); 
		printf("(3) - BALANÇO FINANCEIRO\n");
		printf("(4) - SAIR\n");
		printf("\n");
		printf("Digite a opção:\n ");
		scanf("%d",&op);
		fflush(stdin);
		system("cls");
	
		if (op == 1){									//CADASTRO DO PRODUTO
		printf("Informe quantos produtos deseja cadastrar:\n ");
		scanf("%d",&qtd);
		cadastro[qtd][3];		//DECLARAÇÃO DA MATRIZ CADASTRO
		system("cls");	
			for	(l=0;l<qtd;l++){
				printf("Informe o código do produto:\n");  // CADASTRO DO CODIGO
				scanf("%f",&cadastro[l][0]);
				fflush(stdin);
				system("cls");	
					
				printf("Informe o preço de custo:\n");  //CADASTRO PREÇO DE CUSTO
				scanf("%f",&cadastro[l][1]);
				total_custo=total_custo + cadastro[l][1]; //CONTADOR PARA ACUMULAR O PREÇO DE CUSTO
				fflush(stdin);
				system("cls");
				
				printf("Informe o preço de venda:\n");  //PREÇO DE VENDA
				scanf("%f",&cadastro[l][2] );
				fflush(stdin);
				system("cls");
				
				printf("Informe o pagamento:\n");   //INFORMAR O TIPO DE PAGAMENTO
				printf("(1) - PIX | (2)- Outros\n");
				scanf("%f",&cadastro[l][3]);
				system("cls");
				
					if (cadastro[l][3] == 1){					
					total_venda = cadastro[l][2]-(cadastro[l][2]*0.1); /* FORMA DE CALCULAR O TOTAL DE VENDAS COM E SEM DESCONTO*/
					} else{
					total_venda = total_venda + cadastro[l][2];
					}
				}
		}
		if (op == 2){	//OPÇÃO PARA MOSTRAR OS PRODUTOS E ALTERA-LOS
			for (l=0;l<qtd;l++){
					printf("Code ............: 00%.0f\n", cadastro[l][0]);
					printf("Preço Custo %f....: %.2f\n",l+1, cadastro[l][1]);
					printf("Preço venda %f.....: %.2f\n",l+1, cadastro[l][2]);
					printf("Form. Pagamento %f: %.0f\n",l+1, cadastro[l][3]);
					printf("\n");	
			}
			printf("Deseja fazer alteração? [1]Sim | [2]Não\n");
			scanf("%d", &pag);
			fflush(stdin);
			system("cls");
			if(pag == 1){
			
			printf("Informe qual produto deseja alterar:\n");   /* ALTERAÇÃO DOS PRODUTOS*/
			scanf("%d",&i);
				//printf("Informe o código a alterar\n");		
				scanf("%f",&cadastro[i][0]);
				fflush(stdin);
				system("cls");
				
				total_custo=total_custo - cadastro[i][1];		//FUNÇÃO PARA EXCLUIR O VALOR DA MATRIZ ESCOLHIDA
				printf("Informe o preço de custo a alterar:\n");
				scanf("%f",&cadastro[i][1]);
				total_custo=total_custo + cadastro[i][1];		//FUNÇÃO PARA ADICIONAR O VALOR DA MATRIZ ESCOLHIDA
				fflush(stdin);
				system("cls");
				
				total_venda=total_venda - cadastro[i][2];		//FUNÇÃO PARA EXCLUIR O VALOR DA MATRIZ ESCOLHIDA
				printf("Informe o preço de venda a alterar:\n");
				scanf("%f",&cadastro[i][2] );
				fflush(stdin);
				system("cls");
				
				printf("Informe o pagamento a alterar:\n");
				printf("(1) - PIX | (2)- Outros\n");
				scanf("%f",&cadastro[i][3]);
				system("cls");
					if (cadastro[i][3] == 1){					
					total_venda = cadastro[i][2]-(cadastro[i][2]*0.1); /* FORMA DE CALCULAR O TOTAL DE VENDAS COM E SEM DESCONTO*/
					} else{
					total_venda = total_venda + cadastro[i][2];
					}
			}
			
		} 
		if (op == 3){ 	//OPÇÃO PARA MOSTRAR O RESUMO FINANCEIRO
			printf("RESUMO FINANCEIRO:\n");
			printf("VENDA TOTAL: %.2f\n", total_venda);
			printf("CUSTO TOTAL: %.2f\n",total_custo);
			lucro = total_venda - total_custo;
		  	printf("LUCRO TOTAL: %.2f\n",lucro);
		}
		if (op == 4){
			break;
		}
	printf("Digite 1 pra continuar e 2 para encerrar\n");
	scanf("%d", &end);
	system("cls");
}while(end<2);
}	
