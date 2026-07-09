all: main.o punto.o
	gcc main.o punto.o -o main.exe -lm

main.o:	main.c punto.h
	gcc -c main.c -o main.o

punto.o: punto.c punto.h
	gcc -c punto.c -o punto.o

clean: 
	rm -f *.o *.exe