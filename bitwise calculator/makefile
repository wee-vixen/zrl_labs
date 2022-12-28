all: run clean
run: lab
	./lab
clean:
	rm *.o
	rm lab
open: bitwise.c
	vim bitwise.c
bitwise.o: bitwise.c
	gcc -c bitwise.c
lab: bitwise.o
	gcc -lm bitwise.o -o lab
