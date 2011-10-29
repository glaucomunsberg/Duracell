#ifndef FILA_H 
#define FILA_H

#define MAX 10

typedef struct{
	int valor;
}elemento;

struct nodo{
	elemento chave;
	struct nodo *next;
};

struct desc_fila{
	struct nodo *head;
	struct nodo *tail;
	int tamanho;
};

struct desc_fila *init();
int enqueue(elemento *x, struct desc_fila *descritor);
int dequeue(elemento *x, struct desc_fila *descritor);
unsigned int length(struct desc_fila * descritor);
int print(struct nodo *ptr);

#endif
