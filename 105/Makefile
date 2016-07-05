all:
	make clean
	make spec

spec:
	gcc -c src/conversion.c test/test.c -I/Users/nikola/c/libtap
	gcc -o bin/test conversion.o test.o -L/Users/nikola/c/libtap -ltap
	./bin/test

build:
	gcc src/main.c src/conversion.c -o bin/main

run:
	make clean
	make build
	./bin/main

clean:
	rm -rf *.o
	rm -rf bin/*
