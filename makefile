all: functions.o main.o
	gcc -o randfiletest.exe main.o functions.o

functions.o: functions.c functions.h
	gcc -c functions.c

main.o: main.c functions.h
	gcc -c main.c

run:
	./randfiletest.exe

clean:
	rm *.o
	rm *~
