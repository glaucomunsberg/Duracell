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

int main(int argc, char **argv)
{
	
	//-------Identificadores e Atribuições-------
	
	int escolha;
	int retorno;
	int posi;
	unsigned int posicao;
	struct desc_fila descritor;
	struct nodo *NODO;
	descritor.tamanho = 0;
	elemento x;
	
	//-------------------------------------------
	
	for(;;)
	{
		system("clear");
		printf("Programa de Manipulação de Fila:\n	1. Enqueue\n	2. Dequeue\n	3. Length\n	4.Print Nodo\n	0. Sair\nESCOLHA: ");
		do
		{
			scanf("%d", &escolha);
		}while(escolha < 0 || escolha > 4);

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
					retorno = enqueue(&x, &descritor);
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
					retorno = dequeue(&x, &descritor);
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
					retorno = length(&descritor);
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
			default:
					printf("Você não deveria estar aqui! õ.O\n	Saindo do programa...\n");
					exit(0);
		}
	}
}

