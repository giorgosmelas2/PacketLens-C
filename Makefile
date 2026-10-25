CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iinclude $(shell pkg-config --cflags libpcap)
LDLIBS = $(shell pkg-config --libs libpcap)

TARGET = packetlens

SRC = src/main.c src/cli.c src/capture.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDLIBS)

clean:
	rm -f $(TARGET)

