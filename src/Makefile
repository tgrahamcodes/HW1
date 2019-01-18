CC=gcc
CFLAGS=-I.
DEPS = HW1.h production.h tests.h
OBJ = HW1.c production.c tests.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

HW1: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o
	rm -f ?
