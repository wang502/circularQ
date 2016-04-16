CC = g++
CFLAGS = -c
OBJS =  queue.o

test: $(OBJS)
	$(CC) $(OBJS) -o main
clean:
	rm *.o *~ main
