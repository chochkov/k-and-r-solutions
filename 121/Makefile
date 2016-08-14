all:
	make clean
	make spec

build:
	gcc src/main.c -o bin/main

run:
	make clean
	make build
	cat test/main.in | ./bin/main

spec:
	make clean
	make build
	cat test/main.in | ./bin/main | diff test/main.out -

clean:
	rm -rf *.o
	rm -rf bin/*
