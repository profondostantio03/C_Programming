all: main.o btree.o item.o list.o
	gcc main.o btree.o item.o list.o -o main.exe

main.o: main.c 
	gcc -c main.c -o main.o

btree.o: btree.c btree.h
	gcc -c btree.c -o btree.o

item.o: item-int.c item.h
	gcc -c item-int.c -o item.o

list.o: list.c list.h
	gcc -c list.c -o list.o

clean: 
	rm -f *.o *.exe