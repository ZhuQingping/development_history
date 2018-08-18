CC = g++
CFLAGS = -g -O2 -Wall
LIBS = -lpthread
TARGET = Test
OBJS = test.o
RM = rm -f

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGS) $(LIBS)

$(OBJS):%o:%cpp
	$(CC) -c $(CFLAGS) $< -o $@

# clean environment
clean:
	$(RM) $(TARGET) $(OBJS)
