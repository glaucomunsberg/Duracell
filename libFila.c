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
#include "fila.h"
void imprimir(struct desc_fila *descritor);
int main(int argc, char **argv)
{
	
	//-------Identificadores e Atribuições-------
	
	int escolha;
	int retorno;
	int posi;
	int input;
	int output;
	unsigned int posicao;
	
	elemento x;
	
	struct nodo *NODO;
	NODO = malloc(sizeof(struct nodo));
	
	struct desc_fila *descritor;
	descritor = init();
	
	input = output = 0;
	
	//-------------------------------------------
	
	/*
	 * Obs.: Input e Output para atribuir ao nodo
	 * 	apenas quando estiver inserido e deletado
	 * 	um elemento qualquer.
	 */
	 
	//-------------------------------------------
	
	for(;;)
	{
		system("clear");
		printf("Programa de Manipulação de Fila:\n	1. Enqueue\n	2. Dequeue\n	3. Length\n	4. Print Nodo\n	5. Imprimir\n	0. Sair\nESCOLHA: ");
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
					retorno = enqueue(&x, descritor);
					if(retorno == 1)
					{
						printf("		Valor inserido com sucesso!\n");
						input = 1;
					}
					else
					{
						printf("		Valor não pode ser inserido.\n");
					}
					
					getchar();getchar();
					break;
			case 2:
					//--Remover
					retorno = dequeue(&x, descritor);
					if(retorno == 1)
					{
						printf("		Valor removido com sucesso!\n");
						NODO->chave = x;
						output = 1;
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
					if(input == 1 && output == 1)
					{
						retorno = print(NODO);
					}
					else
					{
						retorno = 0;
					}
					
					if( retorno == 0)
					{
						printf("		Valor não pode ser imprimido.\n");
					}
					
					getchar();getchar();
					break;
			case 5:
					//--imprimir da Estutura
					imprimir(descritor);
					getchar();getchar();
					break;
			default:
					printf("Você não deveria estar aqui! õ.O\n	Saindo do programa...\n");
					exit(0);
		}
	}
}
void imprimir(struct desc_fila *descritor)
{
	if(descritor->head == NULL)
	{
		printf("\n\n		%p head<-Lista \n", descritor->head);
		printf("			NO NODO\n");
		printf("	    		    Lista->Tail %p\n", descritor->tail);
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
		printf("	    		        Lista->Tail %p\n", descritor->tail);
		free(temp);
	}
}
