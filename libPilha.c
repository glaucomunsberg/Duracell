/* Autoria:
 * 
 * 		Universidade Federal de Pelotas
 * 		Centro de Desenvolvimento Tecnológico
 * 		Bacharelado em Ciência da Computação
 * 		Glauco Roberto Munsberg dos Santos
 * 			glaucomunsberg@gmail.com	
 * 
 * Sobre o Projeto:
 * 		Trabalho desenvolvido como avaliação de Estrutura de Dados 1
 * 		Para maiores informações sobre o projeto,
 * 		ele se encontra disponível pelo endereço http://github.com/glaucomunsberg/Duracell
 * 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void imprimir(struct desc_pilha *descritor);
int main(int argc, char **argv)
{
	//-------Identificadores e Atribuições-------
	
	int escolha;
	int retorno;
	int posi;
	unsigned int posicao;
	struct desc_pilha *descritor;
	descritor = init();
	struct nodo *NODO;
	elemento x;
	
	//-------------------------------------------
	
	for(;;)
	{
		system("clear");
		printf("Programa de Manipulação de Pilha:\n	1. Push\n	2. Pop\n	3. Length\n	4. Print Nodo\n	5. Imprimir\n	0. Sair\nESCOLHA: ");
		do
		{
			scanf("%d", &escolha);
		}while(escolha < 0 || escolha > 5);

		switch(escolha)
		{
			case 0:
					//--Sair
					printf("		Saindo do programa...\n");
					exit(0);
			case 1:
					//--Inserir
					printf("		Insira o valor: ");
					scanf("%d", &x.valor);
					retorno = push(&x, descritor);
					if(retorno == 1)
					{
						printf("		Valor inserido com sucesso!\n");
					}
					else
					{
						printf("		Valor não pode ser inserido.\n");
					}
					getchar();getchar();
					break;
			case 2:
					//--Remover
					printf("		Remover o valor: ");
					scanf("%d", &x.valor);
					retorno = pop(&x, descritor);
					if(retorno == 1)
					{
						printf("		Valor removido com sucesso!\n");
					}
					else
					{
						printf("		Valor não pode ser removido.\n");
					}
					getchar();getchar();
					break;
			case 3:
					//--Tamanho
					retorno = length(descritor);
					if( retorno < 1)
					{
						printf("		A fila está vazia.\n");
					}
					else
					{
						printf("		Tamanho: %d", retorno);
					}
					getchar();getchar();
					break;
			case 4:
					//--Print Nodo
					print(NODO);
					break;
			case 5:
					//--Print da Estutura
					imprimir(descritor);
					getchar();getchar();
					break;
			default:
					printf("Você não deveria estar aqui! õ.O\n	Saindo do programa...\n");
					exit(0);
		}
	}
}
void imprimir(struct desc_pilha *descritor)
{
	if(descritor->head == NULL)
	{
		printf("\n		Pilha->head %p\n", descritor->head);
	}
	else
	{
		printf("\n\n		%p head<-Lista \n\n", descritor->head);
		struct nodo *temp;
		temp = malloc(sizeof(struct nodo));
		temp = descritor->head;
		int a=1;
		while(a)
		{
			printf("		Nodo: %p\n", temp);
			printf("				 %d\n", temp->chave.valor);
			printf("	    	   		Nodo->Next %p\n\n", temp->next);
			temp = temp->next;
			if(temp == NULL)
			{
				a = 0;
			}
		}
		free(temp);
	}
}
