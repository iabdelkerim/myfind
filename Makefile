CC=gcc

CFLAGS= -std=c99 -pedantic -Wall -Wextra -Werror

SRC= $(wildcard src/*.c)

OBJ= ${SRC:.c=.o}


all: myfind

myfind: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o myfind
	
	
clean:
	rm $(OBJ) myfind
