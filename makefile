bsq: main.o test.o
	gcc -Wall -Wextra -Werror -o bsq main.o

main.o: main.c
	gcc  -c main.c

fclean:
	rm -f bsq *.o