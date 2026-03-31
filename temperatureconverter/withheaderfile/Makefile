main: main.o conv.o
	g++ -o main main.o conv.o

main.o: main.cpp conv.h
	g++ -c main.cpp

conv.o: conv.cpp conv.h
	g++ -c conv.cpp

clean: 
	rm -f main *.o
