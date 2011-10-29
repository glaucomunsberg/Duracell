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

struct desc_pilha *init()
{
	/*
	 * Entradas:	Não tem
	 *
	 * Função:		Aloca espaço, inicializa pilha
	 * 
	 * Saída:		Um ponteiro para um descritor de lista
	 */
	 
	  struct desc_pilha *descritor;
	  descritor = malloc(sizeof(struct desc_pilha));
	  if( descritor == NULL)
	  {
		  printf("		Oops! Não há memoria para alocar!");
		  getchar();getchar();
		  exit(1);
	  }
	  else
	  {
		  descritor->head = NULL;
		  descritor->tamanho = 0;
	  }
	 
}

int push(elemento *x, struct desc_pilha *descritor)
{
	/*
	 * Entradas:
	 * 				X			- Valor
	 * 				Descritor	- A estrutura por um ponteiro
	 *
	 * Função:		
	 * 				Insere um novo elemento na Pilha
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
	 
	 novo->chave.valor = x->valor;
	 novo->next = descritor->head;
	 descritor->head = novo;
	 descritor->tamanho++;
	 
	return 1;
}

int pop(elemento *x, struct desc_pilha *descritor)
{
	/*
	 * Entradas:
	 * 				X			- Valor
	 * 				Descritor	- A estrutura por um ponteiro
	 *
	 * Função:		
	 * 				Retira um elemento da pilha, colocando-o no elemento x
	 * 
	 * Saída:
	 * 				0	- Se houver erro
	 * 				1	- Se não houver erro
	 */
	
	return 0;
}

unsigned int length(struct desc_pilha *descritor)
{
	/*
	 * Entradas:
	 * 				X			- Valor
	 * 				Descritor	- A estrutura por um ponteiro
	 *
	 * Função/Saída:		
	 * 				Retorna o tamanho da fila
	 */
	 
	return descritor->tamanho;
}

int print(struct nodo *ptr)
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
	
	return 0;
}
