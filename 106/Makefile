all:
	make clean
	make build

build:
	gcc src/main.c -o bin/main

run:
	make && echo thanks | ./bin/main

clean:
	rm -rf *.o
	rm -rf bin/*
