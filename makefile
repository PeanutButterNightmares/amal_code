CC=g++

CFLAGS=-c -Wall

all: program

program: MFU.o products.o
	$(CC) M4U.o products.o -o program

MFU.o: M4U.cpp
	$(CC) $(CFLAGS) M4U.cpp

products.o: products.cpp
	$(CC) $(CFLAGS) products.cpp

clean:
	rm -rf *o program
