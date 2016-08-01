all:
	make clean
	make spec

spec:
	gcc -c src/htoi.c test/test.c -I/Users/nikola/c/libtap
	gcc -o bin/test htoi.o test.o -L/Users/nikola/c/libtap -ltap
	./bin/test

clean:
	rm -rf *.o
	rm -rf bin/*
