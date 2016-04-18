CC = g++
CFLAGS = -c
OBJS =  queue.o
OBJST = queue_t.o

test: $(OBJS)
	$(CC) $(OBJS) -o main
template: $(OBJST)
	$(CC) $(OBJST) -o main
clean:
	rm *.o *~ main
