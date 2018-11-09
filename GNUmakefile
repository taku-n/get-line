all: libget-line.a

libget-line.a: get-line.o
	ar r libget-line.a get-line.o

get-line.o: get-line.c
	gcc -c get-line.c
