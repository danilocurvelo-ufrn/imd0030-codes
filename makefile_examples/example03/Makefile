#Makefile for "imd0030" C++ application
#Created by <nome_autor> 01/01/2025

PROG = imd0030
CC = g++
CPPFLAGS = –Wall –I/usr/imd0030/include
LDFLAGS = -L/usr/imd0030/lib –lmylib
OBJS = main.o processos.o database.o util.o

$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

main.o : 
	$(CC) $(CPPFLAGS) -c main.cpp
processos.o :  processos.h
	$(CC) $(CPPFLAGS) -c processos.cpp
database.o : database.h 
	$(CC) $(CPPFLAGS) -c database.cpp
util.o : util.h 
	$(CC) $(CPPFLAGS) -c util.cpp
clean:
	rm -f $(PROG) $(OBJS)