//      pilha.c
//      
//      Copyright 2011 Glauco Roberto Munsberg <glaucoroberto@Vostro>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.
//      
//      

#include <stdio.h>
#include "pilha.h"

struct desc_pilha *init()
{
	
}
int push(elemento *x, struct desc_pilha *descritor)
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
	 
	return 0;
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
