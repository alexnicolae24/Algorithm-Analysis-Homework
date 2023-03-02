CC = gcc
CFLAGS = -g -Wall
LDLIBS = -lm

build: Alg_Fermat_test.o Alg_M-R_test.o

run-best:
	./test1

run-p1:
	./test1

run-p2:
	./test2

Alg_Fermat.o: Alg_Fermat.c 
	gcc Alg_Fermat.c  -c $(CFLAGS)

Alg_Fermat_test.o: Alg_test.c Alg_Fermat.o
	gcc Alg_Fermat.o Alg_test.c -o test1 $(CFLAGS)

Alg_M-R.o: Alg_M-R.c 
	gcc Alg_M-R.c  -c $(CFLAGS)

Alg_M-R_test.o: Alg_test.c Alg_M-R.o
	gcc Alg_M-R.o Alg_test.c -o test2 $(CFLAGS)
	

.PHONY: clean
clean:
	rm -rf *.o test1 test2 test.in test.out

