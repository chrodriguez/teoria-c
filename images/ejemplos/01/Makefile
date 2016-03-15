CFLAGS=-g -Wall
BINS=$(shell ls *c | sed "s/.c$$/.exe/g" )

all: $(BINS)

%.exe: %.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm $(BINS)
