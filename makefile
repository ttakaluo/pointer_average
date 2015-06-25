CC=gcc
CFLAGS= -Wall -I.
EXE_NAME1 = average-scanf
EXE_NAME2 = average-fscanf
EXE_NAME3 = average-sscanf
FILES1 = main1.o
FILES2 = main2.o
FILES3 = main3.o
average1: $(FILES1)
	$(CC) -o $(EXE_NAME1) $(FILES1) $(CFLAGS)

average2: $(FILES2)
	$(CC) -o $(EXE_NAME2) $(FILES2) $(CFLAGS)

average3: $(FILES3)
	$(CC) -o $(EXE_NAME3) $(FILES3) $(CFLAGS)

clean:
	rm -f *.o

run:
	./$(EXE_NAME)

rebuild: clean all run

