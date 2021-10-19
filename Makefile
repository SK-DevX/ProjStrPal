# -*- Makefile -*-

#target: dependancies
#	action

CC=gcc
OUTPUT=output
OBJS=main.o
SOURCE=main.c
CFLAGS=-o

$(OUTPUT): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(OUTPUT)

$(OBJS): $(SOURCE)
	$(CC) -c $(SOURCE)

clean:
	rm -f *.o output