imd0030: main.o processos.o
	g++ -o imd0030 main.o processos.o

main.o: main.cpp util.h
	g++ -c main.cpp

processos.o: processos.cpp prime.h
	g++ -c processos.cpp

test: imd0030
    ./imd0030

clean: 
	rm -f imd0030 *.o
