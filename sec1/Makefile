CC = gcc
CFLAGS = -Wno-int-conversion -g


all: discussion1 discussion2 exercise1 exercise2

discussion1: discussion1.c
	$(CC) $(CFLAGS) discussion1.c -o discussion1

discussion2: discussion2.c
	$(CC) $(CFLAGS) discussion2.c -o discussion2


exercise1: exercise1.c
	$(CC) $(CFLAGS) exercise1.c -o exercise1


exercise2: exercise2.c
	$(CC) $(CFLAGS) exercise2.c -o exercise2


clean:
	rm -fv exercise1 exercise2 discussion1 discussion2
