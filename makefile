CC=gcc
CFLAGS= -Wall -I.
EXE_NAME1 = average1
EXE_NAME2 = average2
FILES1 = main1.o
FILES2 = main2.o
average1: $(FILES1)
	$(CC) -o $(EXE_NAME1) $(FILES1) $(CFLAGS)

average2: $(FILES2)
	$(CC) -o $(EXE_NAME2) $(FILES2) $(CFLAGS)

clean:
	rm -f *.o

run:
	./$(EXE_NAME)

rebuild: clean all run

