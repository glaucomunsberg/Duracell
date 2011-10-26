############################# Makefile ##########################

all: libPilha libFila

# Pilha #########################################################

PI = libPilha.o pilha.o
libPilha:$(PI)
		gcc -g $(PI) -o libPilha
		
libPilha.o: pilha.h libPilha.c
		gcc -c libPilha.c
 
pilha.o: pilha.h pilha.c
		gcc -c pilha.c

# Fila #########################################################

FI = libFila.o fila.o
libFila:$(FI)
		gcc -g $(FI) -o libFila
		
libFila.o: fila.h libFila.c
		gcc -c libFila.c
 
fila.o: fila.h fila.c
		gcc -c fila.c
