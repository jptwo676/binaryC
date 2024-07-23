CFLAGS = -Wall

all: final

final: main.o
	gcc $(CFLAGS) main.c -o mainE

main.o: main.c
	gcc $(CFLAGS) -c main.c

clean:
	rm main.o
