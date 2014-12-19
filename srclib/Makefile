all: build

build:
	g++ main.cpp Entity.cpp Alive.cpp Item.cpp Arme.cpp Caracs.cpp Competences.cpp  Dice.cpp Combat.cpp -o bin/rpg
	cp bin/rpg ../bin/rpg
lib:
	g++ libmain.cpp Entity.cpp Alive.cpp Item.cpp Arme.cpp Caracs.cpp Competences.cpp  Dice.cpp Combat.cpp -shared -o lib/rpg.so
	cp Alive.h lib
	cp Arme.h lib
	cp Caracs.h lib
	cp Competences.h lib
	cp Dice.h lib
	cp Entity.h lib
	cp Item.h lib
	cp Combat.h lib
	cp libmain.h lib
	cp lib/rpg.so ../lib/rpg.so
start:
	./bin/rpg
prepare:
	mkdir bin
	mkdir ../bin
	mkdir lib
	mkdir ../lib
