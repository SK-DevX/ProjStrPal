# -*- Makefile -*-

#target: dependancies
#	action

CC=gcc
OUTPUT=output
OBJS=main.o strPalChk.o
SOURCE=main.c
CFLAGS=-o

TEST_OUTPUT=testOutput
TEST_OBJS=Cr_Test.o
TEST_SOURCE=tests/Cr_Test.c
CRITERION= -lcriterion

$(OUTPUT): $(OBJS) $(TEST_OBJS)
	$(CC) $(OBJS) $(TESTOBJS) $(CFLAGS) $(OUTPUT)

main.o: $(SOURCE)
	$(CC) -c $(SOURCE)

strPalChk.o: strPalChk.c
	$(CC) -c strPalChk.c

$(TEST_OUTPUT): $(TEST_OBJS)
	$(CC) $(TEST_OBJS) $(CFLAGS) $(TEST_OUTPUT) $(CRITERION)

$(TEST_OBJS): $(TEST_SOURCE)
	$(CC) -c $(TEST_SOURCE)


clean:
	rm -f *.o output testOutput