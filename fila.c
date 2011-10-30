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

struct desc_fila *init()
{
	/*
	 * Entradas:	Não tem
	 *
	 * Função:		Aloca espaço, inicializa fila
	 * 
	 * Saída:		Um ponteiro para um descritor de fila
	 */
	 
	struct desc_fila *descritor;
	descritor = malloc(sizeof(struct desc_fila));
	if( descritor == NULL)
	{
		printf("		Oops! Não há memoria para alocar!");
		getchar();getchar();
		exit(1);
	}
	else
	{
		descritor->head = NULL;
		descritor->tail = NULL;
		descritor->tamanho = 0;
	}
}

int enqueue(elemento *x, struct desc_fila *descritor)
{
	/*
	 * Entradas:
	 * 				X			- Valor
	 * 				Descritor	- A estrutura por um ponteiro
	 *
	 * Função:		
	 * 				Insere um novo elemento na ﬁla
	 * 
	 * Saída:
	 * 				0	- Se houver erro
	 * 				1	- Se não houver erro
	 */
	 
	if(descritor->tamanho == MAX)
	{
		return 0;
	}
	 
	struct nodo *novo;
	novo = malloc( sizeof(struct nodo));
	 
	if( novo == NULL)
	{
		return 0;
	}
	
	if(descritor->head == NULL)
	{
		descritor->tail = novo;
	}
	
	novo->chave.valor = x->valor;
	novo->next = descritor->head;
	descritor->head = novo;
	descritor->tamanho++;
	
	return 1;
}

int dequeue(elemento *x, struct desc_fila *descritor)
{
	/*
	 * Entradas:
	 * 				X			- Valor
	 * 				Descritor	- A estrutura por um ponteiro
	 *
	 * Função:		
	 * 				Retira um elemento da ﬁla, colocando-o no elemento x
	 * 
	 * Saída:
	 * 				0	- Se houver erro
	 * 				1	- Se não houver erro
	 */
	 
	 if(descritor->head == NULL || descritor->tail == NULL)
	 {
		 return 0;
	 }
	 
	 if(descritor->head == descritor->tail)
	 {
		 x = &descritor->tail->chave;
		 descritor->tail = NULL;
		 descritor->head = NULL;
		 descritor->tamanho--;
		 return 1;
	 }
	 
	 struct nodo *temp;
	 temp = malloc(sizeof(struct nodo));
	 temp = descritor->head;
	 
	 while( temp->next != NULL)
	 {
		 
		 if(temp->next->next == NULL)
		 {
			 x = &descritor->tail->chave;
			 descritor->tail = temp;
			 descritor->tamanho--;
			 temp->next = NULL;
			 printf("valor do tail é %d", x->valor);
			 return 1;
		 }
		 else
		 {
			 temp = temp->next;
		 }
	 }
	 return 0;
}

unsigned int length(struct desc_fila * descritor)
{
	/*
	 * Entradas:
	 * 				X			- Valor
	 * 				Descritor	- A estrutura por um ponteiro
	 *
	 * Função/Saída:		
	 * 							Retorna o tamanho da fila
	 */
	 
	return descritor->tamanho;
}

int print(struct nodo * ptr)
{
	/*
	 * Entradas:
	 * 				PTR	- O pronteiro do nodo
	 *
	 * Função:		
	 * 				Imprimime o ponteiro
	 * 
	 * Saída:
	 * 				0	- Se houver erro
	 * 				1	- Se não houver erro
	 */
	 if(ptr == NULL)
	 {
		 return 0;
	 }
	 
	 printf("		Valor: %d", ptr->chave.valor);
	 
	 return 1;
}
