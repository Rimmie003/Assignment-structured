car:functions.o main.o
	gcc-o car function.o main.o
main.o: main.c
		gcc -c main.c
functions.o: functions.c
	gcc -c fuctions.c
clean: 
	rm car.o