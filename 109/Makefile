all:
	make clean
	make spec

build:
	gcc src/main.c -o bin/main

run:
	make clean
	make build
	echo 'ivan  doncho     as' | ./bin/main

clean:
	rm -rf *.o
	rm -rf bin/*
