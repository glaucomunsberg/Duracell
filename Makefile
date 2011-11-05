############################# Makefile ##########################

all: Pilha Fila

# Pilha #########################################################

PI = Pilha.o pilha.o
Pilha:$(PI)
		gcc -g $(PI) -o Pilha
		
Pilha.o: pilha.h Pilha.c
		gcc -c Pilha.c
 
pilha.o: pilha.h pilha.c
		gcc -c pilha.c

# Fila #########################################################

FI = Fila.o fila.o
Fila:$(FI)
		gcc -g $(FI) -o Fila
		
Fila.o: fila.h Fila.c
		gcc -c Fila.c
 
fila.o: fila.h fila.c
		gcc -c fila.c

clean :
		rm edit *.o
