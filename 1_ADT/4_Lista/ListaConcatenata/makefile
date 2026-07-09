all: main.o item-int.o list.o
	gcc main.o item-int.o list.o -o main.exe

main.o: main.c
	gcc -c main.c -o main.o

item-int.o: item-int.c item.h
	gcc -c item-int.c -o item-int.o

list.o: list_nodi.c list.h
	gcc -c list_nodi.c -o list.o

clean:
	rm -f *.o *.exe