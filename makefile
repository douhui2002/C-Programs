objects = test2-1.o test2-1-increment.o test2-1-negate.o

test2-1 : $(objects)
	gcc -o test2-1 $(objects)

test2-1.o : test2-1.c
	gcc -c test2-1.c
test2-1-increment.o : test2-1-increment.c 
	gcc -c test2-1-increment.c
test2-1-negate.o : test2-1-negate.c
	gcc -c test2-1-negate.c

clean : 
	rm test2-1 $(objects)
