all: build

build:
	g++ main.cpp Entity.cpp Alive.cpp Item.cpp Arme.cpp -L -ldlc -o bin/rpg
	cp bin/rpg ../bin/rpg
start:
	./bin/rpg
prepare:
	mkdir bin
