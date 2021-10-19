# -*- Makefile -*-

#target: dependancies
#	action

CC=gcc
OUTPUT=output
OBJS=main.o strPalChk.o
SOURCE=main.c
CFLAGS=-o



$(OUTPUT): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(OUTPUT)

main.o: $(SOURCE)
	$(CC) -c $(SOURCE)

strPalChk.o: strPalChk.c
	$(CC) -c strPalChk.c


clean:
	rm -f *.o output