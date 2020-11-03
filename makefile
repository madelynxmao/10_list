all: game_level.o main.o
	gcc -o game_level main.o game_level.o

main.o: main.c game_level.h
	gcc -c main.c

game_level.o: game_level.c
	gcc -c game_level.c

run: game_level
	./game_level