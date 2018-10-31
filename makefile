all: time.o
	gcc time.o 
time.o: time.c
	gcc -c main.c
run: 
	./a.out