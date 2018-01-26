rect: ./src/rect.h ./src/rect.c
	gcc -c ./src/rect.c -o ./obj/rect.o

all: rect ./src/main.c
	gcc ./src/main.c ./obj/*.o -o ./bin/main