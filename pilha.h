#ifndef PILHA_H 
#define PILHA_H

typedef struct{
	int valor;
}elemento;

struct nodo{
	elemento chave;
	struct nodo *next;
};

struct desc_pilha{
	struct nodo *head;
	struct nodo *tail;
	int tamanho;
};

struct desc_pilha *init();
int push(elemento *x, struct desc_pilha *descritor);
int pop(elemento *x, struct desc_pilha *descritor);
unsigned int length(struct desc_pilha *descritor);
int print(struct nodo *ptr);
#endif
