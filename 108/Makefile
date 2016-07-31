all:
	make clean
	make spec

spec:
	make build
	gcc -c test/test.c -I/Users/nikola/c/libtap
	gcc -o bin/test test.o -L/Users/nikola/c/libtap -ltap
	./bin/test

build:
	gcc src/main.c -o bin/main

run:
	make clean
	make build
	echo 'ivan doncho\n\t\ngencho pesho' | ./bin/main

clean:
	rm -rf *.o
	rm -rf bin/*
