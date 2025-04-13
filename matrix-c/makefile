CC=gcc
CFLAGS=-I.
DEPS = matrix.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: matrix.o 
	$(CC) -o matrix matrix.o  
