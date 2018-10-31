all: main.o
	gcc -o go main.o
time.o: main.c
	gcc -c main.c
run:
	./go
clear:
	rm go
	rm *.o
