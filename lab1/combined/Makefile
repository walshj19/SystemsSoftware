rect: ./src/combined.h ./src/combined.c
	gcc -c ./src/combined.c -o ./obj/combined.o

all: rect ./src/main.c
	gcc ./src/main.c ./obj/*.o -o ./bin/main