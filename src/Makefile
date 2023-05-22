CC = gcc
CFLAGS = -Wall -g

SRCS = main.c crud.c login.c movieList.c
OBJS = $(SRCS:.c=.o)
TARGET = movie_theater

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
