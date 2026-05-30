CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iinclude

TARGET = packetlens

SRC = src/main.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

