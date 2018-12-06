all: search

search: main.o tree.o node.o
	g++ -o search main.o tree.o node.o

main.o: main.cpp tree.h node.h
	g++ -c main.cpp

tree.o: tree.cpp tree.h node.h
	g++ -c tree.cpp 

node.o: node.cpp node.h
	g++ -c node.cpp

clean:
	rm *.o search