all:
	make clean
	make spec

build:
	gcc src/main.c -o bin/main

run:
	make clean
	make build
	echo '\n ivan \n\tpesho\ndoncho\tgeno' | ./bin/main

clean:
	rm -rf *.o
	rm -rf bin/*
